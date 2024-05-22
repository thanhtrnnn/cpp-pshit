import re

# Path to your C++ source file
cpp_file_path = '267\\allsubmissions.cpp'

# Read the content of the C++ source file
with open(cpp_file_path, 'r') as file:
    content = file.read()

# Regular expression to find class names like cppXXX
pattern = r'class\s+(cpp\d{3})\s*{'

# Find all matches
matches = re.findall(pattern, content)

# Generate the factoryMap entries
factory_map_entries = [f'{{"{match}", []() {{ {match}().main(); }} }}' for match in matches]

# Join entries with commas
factory_map = ',\n    '.join(factory_map_entries)

# Print the resulting factoryMap definition
print(f'std::map<std::string, std::function<void()>> factoryMap = {{\n    {factory_map}\n}};')

# You can also write the result to a new file or append it to your existing source file
output_file_path = 'factory_map_output.cpp'
with open(output_file_path, 'w') as output_file:
    output_file.write(f'std::map<std::string, std::function<void()>> factoryMap = {{\n    {factory_map}\n}};\n')

print(f'Factory map written to {output_file_path}')
