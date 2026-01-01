#include <stdio.h>
int main() {
    int radius;
    printf("Enter radius:\n");
    scanf("%d", &radius);
    float pi = 3.1416;
    printf("Area of circle is: %.2f\n", pi * radius * radius);          
    return 0;

}
//alternatively after line 6 we could have assignet a variable area = pi * radius * radius; and then printed area using %.2f



