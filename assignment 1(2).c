#include <stdio.h>
int main (void){
    /*prints 0123456789abcdef
    return 0*/
    char p = '0'; //assign value 48 to p
    while (p <='9'){//p ranges from 0 to 9
    putchar (p);//print 0123456789
    p = p + 1 ;
    }
    char l = 'a';     //assign value 97 to l
    while (l <= 'f'){//l ranges from a to f
        putchar (l);//print abcdef
        l = l + 1 ;//add 1 to the value of l till f
    }
    return 0;
}
