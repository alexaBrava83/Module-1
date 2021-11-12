#include <cs50.h>
#include <stdio.h>

int main(void){
    int a, b, c = 1;
    a = get_int("A: ");
    b = get_int("B: ");
    
    for(int i = a; i < b; i++)
    {
        c *= i;
    }
    printf("A*B=%d\n", c);
}
