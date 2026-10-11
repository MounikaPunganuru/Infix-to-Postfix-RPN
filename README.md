# Infix to Postfix Conversion Using Reverse Polish Notation (RPN)

## Project Overview
This is a C programming mini project that converts infix expressions into postfix expressions using a stack.

## Objective
To convert arithmetic expressions from infix notation to postfix notation using the Last-In, First-Out (LIFO) stack data structure.

## Programming Language
- C Programming

## Concepts Used
- Stack
- Push and Pop operations
- Operator precedence
- Operator associativity
- Infix and Postfix expressions

## Algorithm
1. Read the infix expression.
2. Initialize the stack and postfix string.
3. Scan the expression from left to right.
4. If the character is an operand, add it to the postfix string.
5. If the character is `(`, push it onto the stack.
6. If the character is `)`, pop operators until `(` is found.
7. If the character is an operator, compare precedence and pop operators when required.
8. Push the current operator onto the stack.
9. After scanning the expression, pop all remaining operators.
10. Display the postfix expression.

## Sample Input
(A+B)*(C-D)^E

## Sample Output
AB+CD-E^*

## Conclusion
This project demonstrates the use of a stack data structure to convert infix expressions into postfix expressions efficiently.
