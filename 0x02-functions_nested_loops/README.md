C - Functions, Nested Loops
This repository contains examples of using functions and nested loops in the C programming language. The purpose of this repository is to provide beginners with a basic understanding of how functions and nested loops work in C and to provide them with some examples that they can use as a starting point for their own projects.

Table of Contents
Functions
Declaration and Definition
Parameters and Return Values
Nested Loops
Using Nested Loops
Examples
Functions
Functions are a fundamental concept in programming that allow you to break down your code into smaller, more manageable pieces. Functions are blocks of code that perform a specific task and can be called from other parts of your program. In C, a function can have a return value and can take one or more parameters.

Declaration and Definition
To use a function in C, you need to declare it before you can call it. The declaration specifies the function's name, return type, and parameter types. Here's an example:

int add(int a, int b);

This declares a function called "add" that takes two integers as parameters and returns an integer.

You also need to define the function's code. Here's an example of a function that adds two integers:

int add(int a, int b) {
    return a + b;

Parameters and Return Values
Functions can take parameters, which are values that are passed into the function when it's called. The function can then use these values to perform its task. For example, the "add" function we defined earlier takes two integers as parameters.

Functions can also have a return value, which is the value that the function sends back to the code that called it. For example, the "add" function returns the sum of the two integers that were passed in as parameters.

Nested Loops
Nested loops are loops that are placed inside other loops. They are used to perform repetitive tasks that involve multiple variables or arrays. Nested loops can be used to iterate over a two-dimensional array, for example, or to perform a certain task for every possible combination of two variables.

Using Nested Loops
To use nested loops in C, you simply place one loop inside another loop. Here's an example of a nested loop that iterates over a two-dimensional array:

int array[3][4];
int i, j;

for (i = 0; i < 3; i++) {
    for (j = 0; j < 4; j++) {
        array[i][j] = i * j;
    }
}

This code creates a two-dimensional array of integers, and then uses nested loops to set each element of the array to the product of its row and column indexes.

Examples
This repository contains examples of using functions and nested loops in C. These examples include:

A function that calculates the factorial of a number
A function that calculates the sum of the digits of a number
A program that uses nested loops to print a multiplication table
A program that uses nested loops to print a pattern of asterisks
Feel free to use these examples as a starting point for your own projects, or as a way to practice using functions and nested loops in C.
