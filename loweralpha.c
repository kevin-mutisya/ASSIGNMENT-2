#include <stdio.h>
/**
 * main - primts alphabets in upper then lowercase
 * 
 * Return: 0 always
*/

int main(void)
{
    char upp, low;

    for(low = 'a'; low <= 'z'; low++)
    {
        putchar(low);
    }
    for(upp = 'A'; upp <= 'Z'; upp++)
    {
        putchar(upp);
    }
    putchar('\n');
    return(0);
}