#include <stdio.h>
int main(){
    int a ;
    float b;
    printf("let's talk about scanf\n");
    printf("enter the value of a\n");
    scanf("%d",&a); // & is used to get the address of variable a
    // %d is format specifier to read int value
    // scanf function is used to take input from user
   printf("enter the value of b\n");
   scanf("%f",&b);
    printf("the value of a is %d and the value of b is %f\n",a, b); // this will print the value of a & b entered by user
 
    
    
    return 0;} // a line becomes comment by the shortcut ctrl + /