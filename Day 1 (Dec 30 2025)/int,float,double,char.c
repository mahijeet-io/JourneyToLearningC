// we use alt+shift+down to duplicate a line
#include <stdio.h> 
int main() {
    printf("hi Variables\n");
    int a = 78;
    float b = 65.3; // float is used to store decimal values
    double li = 3.222450; // double is used to store large decimal values
    //diffrence between float and double is that double has more precision than float
    char grade = 'A';
    printf("the value of a is %d\n", a); //%d is format specifier to print int values
    printf("the value of b is %f\n", b); //%f is format specifier to print float values
    printf("the value of b is %.1f\n", b); //%.1f is format specifier to print float values upto 1 decimal point
    printf("the value of li is %lf\n", li); //%lf is format specifier to print double values
    printf("the value of grade is %c\n", grade); //%c is format specifier to print char values
    return 0;

} 
//