#include <stdio.h>
int main() {
    int a;
    int b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("Sum =%d", a + b);
    return 0;
} 
// now writing code if a was int and b was float
#include <stdio.h>
int main() {    
    int a;
    float b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    printf("Sum =%.2f", a + b); // here we have to use %.2f because the result will be float
    return 0;
}