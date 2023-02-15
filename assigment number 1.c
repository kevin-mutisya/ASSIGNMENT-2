#include <stdio.h>
/*main-prints the alphabet in lower case
 *return : 0 (success)*/
int main (void){
    char rh = 'a';
    while ( rh <= 'z'){
        putchar (rh);
        rh = rh + 1;
    }
    return 0;
}
