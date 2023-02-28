#include <stdio.h>

/**
 * main -  A program that print the size of
 *         various types
 *
 *return : Always 0 (success)
 *
 *Description: This program prints the size of various data types
 *              on the computer on which it is compiled and run.
 *              The return value of the main function is used to
 *              indicate the status of the program execution, where
 *              0 signifies success.
 */

int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}