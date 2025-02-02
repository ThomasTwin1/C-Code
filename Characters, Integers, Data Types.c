/* A Program that Uses the Characters, Intergers, and Floating-Point Data Types */
#include <stdio.h>
main()
{
    printf("I am learning the %c programming language\n", 'C');
    printf("I have just completed Chapter %d\n", 2);
    printf("I am %.1f percent ready to move on ", 99.9);
    printf("to the next chapter!\n");
    return 0;

}
/* Play with different specifiers */

/* Play with navigating directories using command prompts */

/* 
Q: What is a C function?
A: A C function is a reusable block of code in the C programming language that performs a specific task.
Functions allow you to divide a program into smaller, modular pieces, making it easier to read, manage, and debug.
Functions are distinguished by parentheses that follow the function name.
Examples: main() printf() calcIt() 
The computer will always use main() as the first function in your program so put it first.
*/

/* #include <stdio.h> always goes before main() because it tells the computer how to interpret functions. */


/* Characters and C */
/* A character is any single character that your computer can represent.
Most of the keys in center of a keyboard is a character. Your computer knows 256 different characters.
Each character can be found on a ASCII table (pronounced ask-ee). 
The ASCII Table maps characters and symbols to numeric values used by computers.

Encoding Standard: 
ASCII assigns a unique number (ranging from 0 to 127) to each character or symbol.

Character Set: 
Control Characters (0–31): Non-printable characters used for controlling devices (e.g., newline, tab).
These characters are not visible on paper, but some of them are located on your keyboard.
Examples: tab(\t), newline(\n),

Printable Characters (32–126): Letters, numbers, punctuation marks, and symbols.
These characters are visible on paper and located on your keyboard.


/* Floats */
/* Floats are decimal point numbers. They represent money, weights, etc in C programming.
Floats take more memory because they are designed to represent a much larger range of values and provide support for fractional values,
which requires more complex encoding. 
*/

/* Integers */
/* Integers are whole numbers without decimals and take up less memory.
Extended ASCII (128–255): Non-standard characters (e.g., accented letters, special symbols), used in some systems.
These characters are foreign and not on your keyboard.
Examples: ∀(math operator), é(accented character), €(euro sign)

/* Return Values*/
/*
Typically return 0 will go at the end of your code to indicate there are no errors with your program. However, you can omit it.

#include<stdio.h>
int main()
{
    printf("You are a programmer");
    return 0; // Indicates no errors 


}

Non Zero numbers are used to identify a specific error.

#include<stdio.h>
int main()
{
    printf("You are a programmer");
    return 1; // Computer looks for a general error. 


}

Other non zero numbers:
1 = General error
2 = File not found
3 = Invalid input
4 = Permission denied
5 = network error
-1 = Unexpected failure
-2 = Resource unavailable



/* Practice Questions */

/*
Basic Questions
Characters

1. What specifier is used to represent a character in the printf function?
A: %c
Example:
#include <stdio.h>
int main()
{
    printf("I am learning the %c programming\n", 'C');
    return 0;
}

2. Write a printf statement that outputs: "My favorite letter is M."
A:
#include <stdio.h>
int main()
{
    printf("My favorite letter is %c.", 'M')
    return 0;
}
Integers

What specifier is used to represent an integer in the printf function?
Modify the program to display the message: "I have just completed Chapter 10."
Floats

What specifier is used to represent a floating-point number with one decimal place?
Write a printf statement to display the following: "My weight is 65.5 kg."
Data Types

Explain the difference between integers and floating-point numbers.
Why do floats take up more memory than integers?
Program Understanding

What will the output of the program be if you change the line:
printf("I am %.1f percent ready to move on ", 99.9);
to
printf("I am %.2f percent ready to move on ", 99.9);
ASCII

What is ASCII, and why is it important in programming?
Find the ASCII value of the character 'A'.
Intermediate Questions
Code Modification

Modify the program to include your name. For example: "Hello, my name is Alex."
Practice with Specifiers

Add a new printf statement that combines a character, integer, and float in one line. For example:
"The letter X, number 5, and percentage 72.3 are displayed together."
Directory Navigation

If you were to play with directory navigation, what commands would you use in a terminal to list files in the current directory?
Comment Practice

Add comments to the code explaining the purpose of each line.
Advanced Questions
ASCII Manipulation

Write a program segment that prints the ASCII value of a character entered by the user.
Memory Comparison

How would you determine the memory size of an integer and a float in your program using the sizeof operator?
Program Extension

Extend the program to calculate and display how many chapters are left if there are 10 chapters in total.
Debugging

Predict and explain what would happen if you used %d instead of %.1f to print a floating-point number in the program.
*/

