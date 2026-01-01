//to zoom in and out use ctrl + and ctrl - respectively
#include <stdio.h>
int mai () {
    printf("this is my first time writing int , fload , double and char on my own\n");

    int myAge = 19;
    float exactHeight = 5.9f; // f is used to specify that its a float value
    double preciseWeight = 93.45689; // double is used to store large decimal values with more precision
    // if we dont write f after decimal value it is considered as double by default
    //Rule of C: "Every decimal number is a double (8 bytes) unless told otherwise."
    char firstInitial = 'M'; /* char is used to store single characters and always use single quotes for char values */
    
    printf("my age is %d years\n", myAge);
    printf("my exact height is %.2f feet\n", exactHeight); // .2 is used to print float value upto 2 decimal points
    printf("my presice weight is %lf kgs\n", preciseWeight);
    printf("my first initial is %c\n", firstInitial);
    return 0;

}
/*overall conclusion:
1. int is used to store whole numbers (4 bytes) and format specifier is %d
2. float is used to store decimal values (4 bytes) and format specifier is %f
3. we have to use f after decimal value to specify it as float
4. every decimal number in C is considered as double (8 bytes) unless told otherwise
5. double is used to store large decimal values with more precision and format specifier is %lf
6. for a decimal value , if we have to print it upto certain decimal points we can use .n 
(n is number of decimal points) before f or lf in format specifier
7. char is used to store single characters (1 byte) and format specifier is %c
8. we have to use single quotes for char values
*/
