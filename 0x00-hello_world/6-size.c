#include <stdio.h>
/**
 * main - A program that prints a line with printf function
 * Return: 0 (Success)
 */
int main(void)
{
    char a;
    int i;
    float f;
    long o;
    long int li;
    long long int lli;
    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
    return (0);
}
