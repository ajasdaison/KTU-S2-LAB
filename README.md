# KTU-S2-LAB

# List of Lab Experiments

This repository contains C programs for various lab experiments. Each experiment is contained in aseparate file. You can find the source code for each experiment below:

## Experiment List
1. [Familiarization of Hardware Components of a Computer](src/03-i-hello-world.c)
2. [Familiarization of Linux environment – How to do Programming in C with Linux](src/03-ii-sum.c)
3. [Familiarization of console I/O and operators in C](src/03-iii-radius.c)
4. [Evaluate the arithmetic expression](src/03-iv-expression.c)
5. [Read 3 integer values and find the largest among them](src/04-largest-among-three.c)
6. [Read a Natural Number and check whether the number is prime or not](src/05-prime-or-not.c)
7. [Read a Natural Number and check whether the number is Armstrong or not](src/06-armstrong-number.c)
8. [Read n integers, store them in an array and find their sum and average](src/07-sum-and-average.c)
9. [Read n integers, store them in an array and search for an element in the array using an algorithm for Linear Search](src/08-linear-search.c)
10. [Read n integers, store them in an array and sort the elements in the array using Bubble Sort algorithm](src/09-bubble-sort.c)
11. [Read a string (word), store it in an array and check whether it is a palindrome word or not](src/10-palindrome-word.c)
12. [Read two strings (each one ending with a $ symbol), store them in arrays and concatenate them without using library functions](src/11-concatenate-strings.c)
13. [Read a string (ending with a $ symbol), store it in an array and count the number of vowels, consonants, and spaces in it](src/12-count-vowels-consonants-spaces.c)
14. [Read two inputs each representing the distances between two points in the Euclidean space, store these in structure variables and add the two distance values](src/13-distance-struct.c)
15. [Using structure, read and print data of n employees (Name, Employee Id, and Salary)](src/14-employee-data-structure.c)
16. [Declare a union containing 5 string variables (Name, House Name, City Name, State, and Pin code) each with a length of C_SIZE (user-defined constant). Then, read and display the address of a person using a variable of the union](src/15-address-union.c)
17. [Find the factorial of a given Natural Number n using recursive and non-recursive functions](src/16-factorial.c)
18. [Read a string (word), store it in an array and obtain its reverse by using a user-defined function](src/17-reverse-string.c)
19. [Write a menu-driven program for performing matrix addition, multiplication and finding the transpose. Use functions to (i) read a matrix, (ii) find the sum of two matrices, (iii) find the product of two matrices, (i) find the transpose of a matrix and (v) display a matrix](src/18-matrix-operations.c)
20. [Do the following using pointers: (i) add two numbers, (ii) swap two numbers using a user-defined function](src/19-pointers-add-swap.c)
21. [Input and Print the elements of an array using pointers](src/20-array-pointers-input-output.c)
22. [Compute sum of the elements stored in an array using pointers and user-defined function](src/21-sum-array-pointers.c)
23. [Create a file and perform the following: (iii) Write data to the file, (iv) Read the data in a given file & display the file content on console, (v) append new data and display on console](src/22-file-operations.c)
24. [Open a text input file and count the number of characters, words and lines in it; and store the results in an output file](src/23-count-characters.c)

## How to Run
To compile and run the programs, follow these steps:

1. Make sure you have a C compiler installed on your system.
2. Clone this repository or download the source files.
3. Navigate to the project directory in your terminal.
4. Create a build directory:
`mkdir build`
``cd build``
5. Generate the build files using CMake:
``cmake ..``
6. Build the project:
``make``
7. Once the build process is complete, you can find the executable files in the `build` directory.
8. Run the desired program:
``./executable_name``


