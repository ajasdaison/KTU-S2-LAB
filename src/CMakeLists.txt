# List all source files in the current directory
file(GLOB SOURCE_FILES *.c)

# Create an executable for each source file
foreach(source_file ${SOURCE_FILES})
  # Extract the file name without extension
  get_filename_component(executable_name ${source_file} NAME_WE)

  # Add executable for the source file
  add_executable(${executable_name} ${source_file})
  target_link_libraries(${executable_name} m)
endforeach()
