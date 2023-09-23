
## C Program – Control Flow

This repository contains GeeksforGeeks C Programming Examples (Control Flow). This is next part of my repository C_Program_Basic.
If you just started learning C Programming, then Checking out my repository C_Program_Basic before this, would be best.

Control flow refer to executing the order of statements. They mainly are used for making decisions, repeat and jump  to specific sections of code. 

In C Programing :
 * Conditional Statements
 * Looping Statements
 * Control Transfer Statements

## Conditional Statements


1. if statement : -
 if statement lets us test for a condition (such as comparing two variables)
and execute different parts of code, depending on the conditions with
relational and logical operators are also included.


2. if-else statement : - 
Sometimes we need one bloock of code to be true and other block to be false. if works on the condition.

3. else-if statement : - 
To execute 2 or more condetions one after other if their true or not, else-if statement is used.

4. Nested-if statement : -
Executing an if statement inside another if staement. This refers to a condition being checked after the outer if is true.
 
5. Switch statement : -
Based on the results of a specific expression we may want different outputs. Switch allows us to do that. for different cases we can get recuired results.


## Looping Statements

1. for loop : -
This allows us to repeat the execution of a block of code for a fix number. It follows initialization, the condition, and the update.

2. while loop : -
This repeats a block of code until it reaches certain condition.

3. do-while loop : -
This runs a block of code then for specific condition it repeats. It will run the code at eat once. Based on the conditon it repeats.

## Control Transfer Statements

1. break statement : - 
Stops executing current block of code (conditional statements or loop statements). This is mostly used when the conditional or loop statements doesn't need to be executed after geting required results. 

2. continue statement : -
The continue statement skips the current statement in the loop and continues with the next block. Statements after the continue statement in the loop are not executed.

3. goto statement : -
It allows us to transfar and execute a labeled code. It's like jumpng from this block of code to another.

4. return statement : -
Ends the code with a value. The value is given to the caller.

## Practice problems

*  C Program to Check Whether a Number is Positive, Negative, or Zero
*  C Program to Check Whether Number is Even or Odd
*  C Program to Check Whether a Character is Vowel or Consonant 
*  C Program to Find Largest Number Among Three Numbers
*  C Program to Calculate Sum of Natural Numbers 
*  C Program to Print Alphabets From A to Z Using Loop
*  C Program to Check Leap Year
*  C Program to Find Factorial of a Number
*  C Program to Make a Simple Calculator 
*  C Program to Generate Multiplication Table 
*  C Program to Print Fibonacci Series
*  C Program to Find LCM of Two Numbers
*  C Program to Check Armstrong Number
*  C Program to Display Armstrong Numbers Between 1 to 1000 
*  C Program to Display Armstrong Number Between Two Intervals 
*  C Program to Reverse a Number
*  C Program to Check Whether a Number is a Palindrome or Not 
*  C Program to Check Whether a Number is Prime or Not
*  C Program to Display Prime Numbers Between Intervals
*  C Program to Check whether the input number is a Neon Number
*  C Program to Find All Factors of a Natural Number
*  C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms

## Positive, Negative, or Zero

We take a Number from the user. Now, we need to write a C program that can tell us whether the Number is Positive, Negative, or Zero.

To check whether the Number is Positive, Negative, or Zero we can put 3 conditions. Conditions have to be the compersion of the number and 0.
1. Number == 0
2. Number > 0
3. Number < 0

We'll use else-if statement. We can put 2 conditions, else statements will automatically get the last condition. Accourding to conditions print whether the Number is Positive, Negative, or Zero.

## Even or Odd

If a number can be devided by 2, they are even numbers. So that refers to a number that can't be devided by 2, are odd numbers.

This can solved in many ways.
1. Modulus operator % : - If Number % 2 == 0, then it's even. Otherwise the number is odd.

2. Bitwise operator & : -
If (Number & 1) == 0, then it's even. Otherwise the number is odd.

3. Bitwise operator XOR ^ : -
If (Number ^ 1) == (Number + 1), then it's even. Otherwise the number is odd. Here (Number + 1) is decimal addition.

4. Left-right shift : -
If ((Number >> 1) << 1) == Number, then it's even. Otherwise the number is odd.  

5. Division operator : -
If ((Number / 2) * 2) == Number, then it's even. Otherwise the number is odd.

## Vowel or Consonant

We'll use switch statement. Take a character from the user. Switch condition is the character. Our cases will be A, E, I, O, U, a, e, i, o, u. These cases will print the character is vowel. In default, print the character is consonant.


