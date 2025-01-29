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

