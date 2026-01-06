#include <stdio.h>

int main()
{int a,b;
printf("Enter two numbers: ");
scanf("%d %d", &a,&b);
printf("a and b are:%d,%d\n", a,b);
printf("Difference:%d\n",a-b);
printf("Product:%d\n",a*b);
printf("quotient:%d\n",a/b);
printf("Remainder:%d",a%b);


    return 0;
}