cmake_minimum_required(VERSION 3.0)

# Set C standard to C99
set(CMAKE_C_STANDARD 99)

# Set project name
project(LabExperiments C)

# Add source files
set(SOURCE_FILES
	3-i-hello-world.c
	3-ii-sum.c
	3-iii-radius.c
	3-iv-expression.c
	4-largest-among-three.c
	5-prime-or-not.c
	6-armstrong-number.c
	7-sum-and-average.c
	8-linear-search.c
	9-bubble-sort.c
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
	21-sum-array-pointers
	22-file-operations.c
	23-count-characters.c
)
# Create executable for each source file
foreach(SOURCE_FILE ${SOURCE_FILES})

get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)
	add_executable(${EXECUTABLE_NAME}
${SOURCE_FILE})
endforeach()

