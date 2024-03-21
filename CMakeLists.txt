cmake_minimum_required(VERSION 3.0)

# Set C standard to C99
set(CMAKE_C_STANDARD 99)

# Set project name
project(LabExperiments C)

# Add source files
set(SOURCE_FILES
	03-i-hello-world.c
	03-ii-sum.c
	03-iii-radius.c
	03-iv-expression.c
	04-largest-among-three.c
	05-prime-or-not.c
	06-armstrong-number.c
	07-sum-and-average.c
	08-linear-search.c
	09-bubble-sort.c
	10-palindrome-word.c
	11-concatenate-strings.c
	12-count-vowels-consonants-spaces.c
	13-distance-struct.c
	14-employee-data-structure.c
	15-address-union.c
	16-factorial.c
	17-reverse-string.c
	18-matrix-operations.c
	19-i-pointers-add.c
	19-ii-pointers-swap.c
	20-array-pointers-input-output.c
	21-sum-array-pointers.c
	22-file-operations.c
	23-count-characters.c	
)
# Create executable for each source file
foreach(SOURCE_FILE ${SOURCE_FILES})

get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)
	add_executable(${EXECUTABLE_NAME}
${SOURCE_FILE})
endforeach()

