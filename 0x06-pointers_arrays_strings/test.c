#include "main.h"
#include <stdio.h>
int main(int a , int b){
    int c;
    int d;
    if (a > b)
    {
        d = a + b;
        c = a - b;
        printf("the addition of a and b is %d and the subtraction of a and b is %d\n", d,c);
    }
    else
    {
        d =  b + a;
        c = a - b;
        printf("the addition of a and b is %d and the subtraction of a and b is %d\n",d,c);
    }
    return (0);
}