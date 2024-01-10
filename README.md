
## C Program – Control Flow

This repository contains GeeksforGeeks C Programming Examples related to control flow. It is the next part of my repository, C_Program_Basic. If you have just started learning C Programming, I recommend checking out my repository C_Program_Basic before diving into this one. I have solved all these code examples on my own, so my code may seem a little more complicated than other solutions you can find online.

Control flow refers to the execution order of statements. It is mainly used for making decisions, repeating actions, and jumping to specific sections of code.

In C Programming, we have the following types of control flow: 
 * Conditional Statements
 * Looping Statements
 * Control Transfer Statements


## Conditional Statements


1. if statement -
The ```if``` statement lets us test for a condition (such as comparing two variables) and execute different parts of code, depending on the conditions with relational and logical operators.


2. if-else statement -
The ```if-else``` statement is used when we need one block of code to be executed if the condition is true and another block of code to be executed if the condition is false.

3. else-if statement - 
The ```else-if``` statement is used to execute two or more conditions one after the other if they are true or not.

4. Nested-if statement -
The ```nested-if``` statement refers to executing an ```if``` statement inside another ```if``` statement. This refers to a condition being checked after the outer ```if``` is true.
 
5. Switch statement -
The ```switch statement``` is used when we want different outputs based on the results of a specific expression. It allows us to get the required results for different cases.


## Looping Statements

1. for loop : -
The ```for``` loop allows us to repeat the execution of a block of code for a fixed number of times. It follows initialization, the condition, and the update.

2. while loop : -
The ```while``` loop repeats a block of code until it reaches a certain condition.

3. do-while loop : -
The ```do-while``` loop runs a block of code at least once, then repeats it based on a specific condition.

Both ```while``` loop and ```for``` loop are Entry Controlled Loop as they check the loop condition before entering the loop. The ```do-while``` loop is Exit Controlled Loop as it checks the loop condition after executing the loop.

## Control Transfer Statements

1. break statement : - 
The ```break``` statement is used to stop executing the current block of code (conditional statements or loop statements). This is mostly used when the conditional or loop statements don’t need to be executed after getting the required results.

2. continue statement : -
The ```continue``` statement skips the current statement in the loop and continues with the next block. Statements after the ```continue``` statement in the loop are not executed.

3. goto statement : -
The ```goto``` statement allows us to transfer and execute a labeled code. It’s like jumping from this block of code to another. However, the use of ```goto``` statements is generally discouraged as it can make the code difficult to read and maintain.

4. return statement : -
The ```return``` statement is used to end the execution of a function and return a value to the caller.


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
1. **Modulus operator** % : - If Number % 2 == 0, then it's even. Otherwise the number is odd.

2. **Bitwise operator** & : -
If (Number & 1) == 0, then it's even. Otherwise the number is odd.

3. **Bitwise operator XOR** ^ : -
If (Number ^ 1) == (Number + 1), then it's even. Otherwise the number is odd. Here (Number + 1) is decimal addition.

4. **Left-right shift** : -
If ((Number >> 1) << 1) == Number, then it's even. Otherwise the number is odd.  

5. **Division operator** : -
If ((Number / 2) * 2) == Number, then it's even. Otherwise the number is odd.

## Vowel or Consonant

We'll use switch statement. Take a character from the user. Switch condition is the character. Our cases will be A, E, I, O, U, a, e, i, o, u. These cases will print the character is vowel. In default, print the character is consonant.

## Largest Number

Take 3 user input. Declare a variable (large) then asign the value of an input to it. Use nested if and compare between the variable (large) and the other numbers. If the other numbers are larger than the variable large, then asign that value to large. So, at the end of the statement the variable large is the largest number.

## Sum of Natural Numbers 

Take a number as user input. Take a variable sum. Use formula the print the sum.\
Follow the formula: 
Sum = ((Number + 1) * Number) / 2

## Print Alphabets A to Z

The ASCII value from A to Z is 65 to 90. We can print them using a for loop that starts at 65 and ends when reaches 90. 


## Leap Year

Let's take a year as user input. Use if statement to check whether the year is a leap year or not.\
Our condition would be : \
(Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0


## Factorial

When a number is multiplied with every natural previous numbers then it is the factorial of that number. Take a number as user input (Number). We'll be using for loop where user input is the number of repetation. Declare a variable (loop) and asign it's value to the number of repetation. In the loop asign the value of ```i * Number``` to Number. Then print the number to show the result.

Here if user input (Number) is 5 then, \
i = 1 ------ Number = 1 * 5 ----- Output = 5\
i = 2 ------ Number = 2 * 5 ----- Output = 10\
i = 3 ------ Number = 3 * 10 ----- Output = 30\
i = 4 ------ Number = 4 * 30 ----- Output = 120\
 ----------------- End of the loop ------------------\
 The factorialof 5 is 120.


## Simple Calculator

We'll use do-while loop for user to continue using the calculator. Right after declaration the whole code will be in do-while loop.

We'll take 2 user input in float data type. Take a variable in char data type, this refers to all the operators that will be used. User will input operators and use a if statement to end the code when the user wants to stop. We can use switch statement for this. switch condition will be operators. Our cases will follow formula accourding to operators (+, -, *, /). While statement is 1.


## Multiplication Table

Take a user input. Now in a for loop we'll multiply And asign it as the result. ```i * Number``` Then print that in Multiplication format. 

## Fibonacci Series

We need to undrstand Fibonacci Series. Fibonacci Series is expressed by 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on. The pattern is like\
0 + 1 = 1\
1 + 1 = 2\
1 + 2 = 3\
2 + 3 = 5\
3 + 5 = 8...and so on

The equation for Fibonacci Series is f(n) = f(n-1) + f(n-2); where f(0) = 0 and f(1) = 1\
We will use recursion. Recursion is a concept where we use previous result to get the next result. for example to get f(n) we will need f(n-1) and f(n-2). If we need the result of f(2) then we need f(2-1) or f(1) whice is a previous result for f(2). Like this we take previous result to get the final result. Well, in c Recursion is calling a function within itself. 

We will create a function called Fibo. User will fix how long the Fibonacci Series will be. In main function for loop will print the Fibonacci Series.  In for loop i will start from 0 and increase it's value. To print the Series ```printf("%d  ", Fibo(i));```

In the funtion, if-else if-else statment is used. If i=0, will return 0. If i=1, will return 1. else statment is to call the function within itself. It will return ```Fibo(n-1) + Fibo(n-2)```


## LCM of Two Numbers

We’ll take two numbers from the user and calculate their least common multiple (LCM) as the output. We’ll compute the LCM by invoking our custom-made function called ```lcm```. The function will accept two integer numbers. 

Now we need to understand Euclidean algorithm to solve this. In Euclidean algorithm we divide the larger number by the smaller one. If the remainder isn’t zero, we divide the first divisor by the remainder. Then repeat the process until the reminder is zero. The last divisor will be the LCM.

Now we’ll take the largest number as an integer ```max```. The smaller number will be an integer ```divi```. If any number is equal to 0, then the other number would be the LCM. Next, we use a while loop that will end if ```max % divi``` is equal to 0. In the loop, the value of ```max % divi``` is assigned to an integer ```rem```. The value of ```divi``` is assigned to ```max```, and the value of ```rem``` is assigned to ```divi```. When the while loop ends, the value of ```divi``` will be returned.


## Check Armstrong Number
An Armstrong number is a number that is equal to the sum of its digits raised to the power of the number of digits in the number itself. For instance, the number 153 is an Armstrong number because it has 3 digits and satisfies the following equation: 1^3 + 5^3 + 3^3 = 153
 
In general, if we have an n-digit number A, then the sum of each digit raised to the power of n should be equal to A for A to be an Armstrong number.

Take an integer ```a``` as input. We need to count total digits of ```a```. For total number of  digits an integer ```n```, its value is 0. Assign the value of ```a``` to other two integers ```num1``` & ```num2``` . Divide ```num1``` by 10 in a while loop. The quotient will be assigned to ```num1```. It will stop when the quotient is zero.  Take an integer ```n``` and assign 0 as its value. In this while loop ```n++``` will count total digits. In another while loop, ```num2%10``` will be assigned to an integer ```rem```.This loop will end when ```num2``` is zore. This will give us each digits individually. Then ```pow(rem,n)``` where rem indicates individual digit and n is the total digits. For the summation an integer ```arms```, its value is 0. ```pow(rem,n)+arms``` will be assigned to ```arms```.  ```num2/10``` is assigned to num2, so that we get next digits to repeat the process. Now if ```arms==a``` then the output is yes otherwise no.

## URL

https://www.geeksforgeeks.org/c-programming-examples/
