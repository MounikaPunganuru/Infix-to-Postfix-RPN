# Infix to Postfix Conversion Using Reverse Polish Notation (RPN)

## 1. Project Overview
This mini project converts arithmetic expressions from Infix notation to Postfix notation using a stack data structure.

## 2. Objective
To implement an algorithm in C that converts infix expressions into postfix expressions using the Last-In, First-Out (LIFO) stack.

## 3. Technologies Used
- Programming Language: C
- Data Structure: Stack
- Compiler: GCC / any compatible C compiler

## 4. Concepts Used
- Stack operations: Push and Pop
- Operator precedence
- Operator associativity
- Infix and Postfix expressions
- Parentheses handling

## 5. Algorithm
1. Read the infix expression.
2. Scan the expression from left to right.
3. Add operands directly to the postfix expression.
4. Push opening parentheses onto the stack.
5. When a closing parenthesis is found, pop operators until the opening parenthesis is found.
6. For operators, compare precedence and associativity with the stack top.
7. Push the current operator onto the stack when appropriate.
8. Pop all remaining operators from the stack.
9. Display the postfix expression.

## 6. Sample Input and Output

Input:
(A+B)*(C-D)^E

Output:
AB+CD-E^*

## 7. How to Compile and Run
Compile:
gcc infix_to_postfix.c -o infix_to_postfix

Run on Linux:
./infix_to_postfix

Run on Windows:
infix_to_postfix.exe

## 8. Conclusion
The project demonstrates how a stack can be used to convert infix expressions into postfix expressions by considering operator precedence, associativity, and parentheses.
