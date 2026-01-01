#include <stdio.h>
int main() {
    int a =3, b=10;
    printf("Before swap: a + %d, b = %d\n ", a,b); // a , b after double means first %d is for a and second %d is for b
// swapping a and b using a third temporary variable
    int temp;
    temp = a;
    a = b;  
    b = temp;
    printf("After swap: a = %d, b = %d", a,b);

    return 0;
}