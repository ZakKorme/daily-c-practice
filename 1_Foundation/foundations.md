# Foundations

## Day 1 - Basic Concepts

1.  Multiline Comments (/** .... **/)
2.  Single line Comments (//)
3.  Preprocessor
    - part of the C compilation process that recognizes special statements
    - analyzes these statements before the analysis of the C program itself
    - Identified with a # sign
4.  Include Statement
    - preprocessor directive/statement
    - #include <stdio.h>
    - includes a header file with the .h extension
    - stdio is short for standard input/output
5.  Header Files
    - header files specify information that the compiler uses to integrate any predefined functions within a program
    - header file names are case sensitive on some systems, so you should always write them in lowercase
    - There are two ways to #include header files in a program:
      1. Using angle brackets (#include <stdio.h>)
      2. Using double quotes (#include "stdio.h")
         - looks in current directory

## Day 1 - Variables and Data Types

1. Types of Data:
   - **int**: contains integral values only (no decimals)
   - **float**: contains floating-point numbers (decimals)
   - **double**: same as the float, with roughly twice the precision.
   - **char**: represent a single character, such as 'a', '6', or ';'.
   - **\_Bool**: stores the values 0 and 1 (True(1)/False(0))
   - **Enums**: defines a variable and specify the valid values that can be stored
2. The difference between the types is in the amount of memory they occupy and the range of values they can hold
3. C Offers three adjective keywords to modify the basic integer type
   - **short**: uses less storage than an int, thus saving space when only small numbers are needed
   - **long**: more storage than int, enabling you to express larger integer values.
   - **unsigned**: used for variables that have only nonnegative values (positive). Will throw error if negative values are assigned
4. Format Specifiers
   - %d or %i: integer
   - %f: float
   - %e %g: double
   - %c: char
   - i%: bool

## Day 1 - Operators

1. Statements
   - form the basic program steps of C, and most statements are constructed from expressions
2. Expression
   - consists of a combination of operators and operands
3. Arithmetic Operators
   - +: adds tow operands
   - -: subtracts second operand from the first
   - \*: multiples both operands
   - /: divides numertor by de-numerator
   - %: modulus operator and remainder after an integer division
   - ++: increment operator increases the integer value by one
   - --: decrement operator decreases the value by one
4. Logical Operators
   - &&: logical AND operator
   - ||: logical OR operator
   - !: logical NOT operator
5. Assignment Operators
   - =: simple assignment operators
   - +=: add and assignment operator
   - -=: subtract and assignment operator
   - "\*=": multiply and assignment operator
   - /=: divide and assignment operator
   - %=: modulus and assignment operator
   - <<=: left shift AND assignment operator
   - ">>" =: right shift AND assignment operator
   - &=: Bitwise exclusive AND assignment operator
   - ^=: Bitwise exclusive OR and assignment operator
   - |=: Bitwise inclusive OR and assignment operator
6. Relational Operators
   - ==: checks if values of two operands are equal or not
   - !=: checks if the values of two operands are not equal.
   - ">": checks if the value of the left is greater than the right
   - "<": checks if the value of the right is greater than the left
   - ">=": checks if the value of the left is greater than or equal to the value on the right
   - "<=": checks if the value of the left is less than or equal to the value on the right
7. Bitwise Operators

   - operate on the bits in integer values
   - uses &/| to test and set individual bits(8 bits in 1 byte) in an integer variable
   - turn on/off bits with operators

   - &: binary AND operator copies a bit to the result if it exists in both operands
   - \: Binary OR operator copies a bit if it exists in either operand
   - ^: Binary XOR operator copies the bit if it is set in one operand but not both
   - ~: binary Ones complement operator is unary and has the effect of 'flipping' bits
   - <<: binary left shift operator. The left operands value is moved left by the number of bits specified by the right operand
   - ">>": Binary Right shift operator. The left operands value is moved right by the number of bits specified by the right operand

8. Type Conversions
   - The Cast Operator -> explicit type conversion
   - The type cast operator has a higher precendence than all the arithmetic operators except the unary minus and unary plus
   - **sizeof** operator return how many bytes are occupied in memory by a given type
9. Operator Precendence
   - determines the order of evaluation when two opereators share an operand

## Day 1 - Control Flow

1. Brackets are optional in C w/ if statements
2. Switch statements must have brackets
3. Goto Statement
   - has two parts; the goto and a label name
   - label is naed following the sam convention used in naming a variable
4. Infinite Loop
   - the condition for continuing the loop is absent, the loop will continue indefinitely
   - sometimes useful for monitoring data or listening for connections

## Day 2 - Arrays

1. Array is a fixed number of data items that are all of the same type
2. Declaration is: DataType name[size];
3. We can initialize an array and assign values
   - int counters[5] = {0, 1, 2, 3, 4 };
4. Multidimensional Arrays
   - initialization: int matrix[4][5];
   - The first bracket corresponds to the rows
   - The second bracket corresponds to the columns
   - {
     {0,1,2,3,4},
     {0,1,2,3,4},
     {0,1,2,3,4},
     {0,1,2,3,4}
     };
   - As with 1D arrays, it is not required that the entire array be initialized
5. Variable Length Arrays
   - assigning a variable to the size property of an array

## Day 3 - Functions

1. Self contained unit of program code designed to accomplish a particular task
   - Advantages: allows for divide and conquer, reduces code complexity
2. Defining Functions
   - if there are no statements in the body of a function, the return type must be void, and the function will not do anything
   - the name of a function can be any **legal** name (same as variable)
   - Function Prototype:
     a. statement that defines a function: name, return value type, and parameters
     b. provides all the external specifications for the function
     c. function prototypes generally appear at the beginning of a source file prior to the implementations of any functions or in a header file. Allows any of the functions in the file to call any function regardless of where you have placed the implementation of the functions

## Day 3 - Character Strings

1. We have learned about the char data type
   - contains a single character, enclosed within a pair of single quotation marks
2. String Constant or String Literal
   - sequence of characters or symbols between a pair of double-quote characters
   - strings in C are stored in an array of type char
   - %s format specifier is for outputting a null-terminated string
3. Null Character (NOT NULL)
   - code value 0 is added to the end of each string to mark where it ends
   - this character is known as the null character and you write it as \0
   - string is always terminated by a null character, so the length of a string is always one greater than the number of characters in the string
   - **ALWAYS INCREASE STRING SIZE BY ONE TO MAKE SPACE FOR NULL CHARACTER**
4. Constant Strings
   - using #define
   - C90 added a seconday way to create symbolic constants
   - using the const keyword to convert a declaration for a variable into a declaration for a constant
   - enums are a third way to create symbolic constants
5. Common String Functions: All of the following are included in <string.h>
   - **strlen(str)**: length of a string
   - **strncpy(destination, source, size of copy)**: copying one character string to another
   - **strncar(value1, value2, size of copy)**: combining two character strings together, the first value is changed
   - **strncmp()**: determining if two character strings are equal.
     - 0: equal
     - 1: value 1 is greater than value 2
     - -1: value 1 is less than value 2
   - **strchr(searchedStr, valueToBeSearched)**: searches a given string for a specified character and returns a pointer to the character in memory
   - **strstr(searchedStr,valueToBeSearched)**: searches one string for the first occurrence of a substring and returns a pointer to the character in memory
6. Converting String
   - toupper(): converts from lowercase to uppercase
   - tolower(): converts from uppercase to lowercase
   - atof(): converts number of type string to number of type double

## Day 3 - Debugging

1. Always start with the FIRST error
2. Common Problems
   - Logic Errors
   - Syntax Errors
   - Memory Corruption
   - Performance / Scalability
   - Lack of Cohesion
   - Tight Coupling (dependencies)
3. Tracing using printf statements
4. Call Stack
   - a stack trace (call stack) is generated whenever your app crashes because of a fatal error
5. Common C Mistakes
   - Omitting prototype declarations
   - Failing to include the header file
   - Confusing a character constant and a character string
   - Using the wrong bounds for an array (index 0 and extra location for null character)

## Day 5 - Pointers

1. A pointer provides an indirect means of accessing the value of a particular data item
   - a varaible whose vaule is a memory address
   - its value is the address of another location in memory that can contain a value
   - allows us to return multiple values from a function
   - pointers provide direct memory access
2. Operations on Pointers
   - Assign Address
   - Dereference (\*: vaule stored)
   - Pointer Address
   - Pointer Arithmetic
   - Difference between two pointers
   - Relational Operators to compare the vaules of two pointers
3. **DO NOT DEREFERENCE AN UNINITIALIZED POINTER**
4. We can use the const keyword when declaring a pointer to indicate that the **value pointed** to must not be changed
   - const int \*pCount = &count
5. We can also use the const keyword when indicating that the pointer always points to the same address
   - int \*const pCount = &count
6. Pointer of type void\* can contain the address of a data item of any type
   - Cannot be derefernced directly
   - the void pointer must first be explicitly cast to another pointer type before it is dereferenced
7. Pointers and Arrays
   - the address operator is not used
   - when you define a pointer that is used to point to the elements of an array, you do not designate the pointer as type "pointer to array". You designate the pointer as pointing to the type of element that is contained in the array
8.
