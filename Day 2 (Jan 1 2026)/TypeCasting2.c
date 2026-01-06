#include<stdio.h>

int main() {
    int a= 9,b=2;
    float rersult1 = a/b; //no expicit type casting
    float rersult2 = (float)a/b; //explicit type casting
    printf("Without type casting: %f\n", rersult1);
    printf("With type casting: %f\n", rersult2);
    return 0;
}