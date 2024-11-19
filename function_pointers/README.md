This project demonstrates the use of function pointers in C. It contains various examples, each showcasing a different application of function pointers.

File Structure
The project contains the following files:

1. 0-print_name.c
Description: A function that takes a name as a parameter and executes a function that prints that name in various formats.
Functions:
print_name: Takes a name and a function pointer to print the name.
print_name_as_is: Prints the name as it is.
print_name_uppercase: Prints the name in uppercase.
2. 1-array_iterator.c
Description: This file defines a function that takes an array of integers and applies a function to each element of the array.
Functions:
array_iterator: Iterates through an array and applies a function to each element.
print_elem: Prints an integer.
print_elem_hex: Prints an integer in hexadecimal format.
3. 2-int_index.c
Description: A function that searches for an integer in an array using a comparison function.
Functions:
int_index: Searches for the first element in an array that satisfies the comparison function.
Comparison functions: is_98, is_strictly_positive, abs_is_98.
4. 3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c
Description: A simple calculator program that performs basic arithmetic operations.
Functions:
op_add, op_sub, op_mul, op_div, op_mod: Functions that perform addition, subtraction, multiplication, division, and modulo operations respectively.
get_op_func: Returns the function corresponding to a given operator.
Main program: Takes two integers and an operator from the command line and performs the corresponding operation.
Compilation
To compile the program, use the following command:

bash
Copier le code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
Example Usage
0-print_name.c: Prints a name in two different formats.

bash
Copier le code
./a
1-array_iterator.c: Applies a function to each element in an array.

bash
Copier le code
./b
2-int_index.c: Searches for an integer in an array using a comparison function.

bash
Copier le code
./c
3-calc.c: A simple calculator.

bash
Copier le code
./calc 1 + 1
./calc 1024 '*' 98
./calc 1024 / 10
Requirements
The code should be written in C.
The project should use function pointers to achieve the required functionalities.
The program should handle errors gracefully, printing appropriate error messages and exiting with the specified status codes.
Errors
If the user enters an invalid operator in the calculator program, it will print Error and exit with status 99.
If there is an attempt to divide or take the modulo of a number by 0, it will print Error and exit with status 100.
If the wrong number of arguments is provided, the program will print Error and exit with status 98.
License
This project is licensed under the MIT License - see the LICENSE file for details.


