/* if a= 9 and b=2 then a/b will be 4 instead of 4.5
this is because if both a and b are integers then the result will also be an integer
 to get the correct result we need to cast one of the variables to float or double */
 #include<stdio.h>
 
 int main() {
 int a= 9,b=2;
    printf("The value of a/b is %f\n", (float)a/b);// (float) temporarily converts a to float
    return 0;
 }
// IMPLICIT TYPE (Automatic) CASTING --- for ex we take both make a and b as float then the result will be float
// EXPLICIT TYPE CASTING --- we use (float) or (int) to convert the variable to the desired type