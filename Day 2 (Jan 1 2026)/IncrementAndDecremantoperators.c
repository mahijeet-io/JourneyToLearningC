#include<stdio.h>

int main() {
    int a = 10;
    printf("Initial value of a: %d\n", a);// prints 10 (now refer line 11 to 18)
    // a = a + 1;//same as a+=1
    //++a; // pre-increment the value is increased first and then used
    //a++; // post-increment the value is used first and then increased
    // --a; // pre-decrement
    // a--; // post-decrement
    printf("the value of a is %d\n", a++); //prints 10 then a becomes 11
    printf("the value of a is %d\n", ++a);// a becomes 12 then prints 12
    printf("the value of a is %d\n", a);// prints 12


    return 0;
}