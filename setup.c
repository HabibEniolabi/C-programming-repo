#include <stdio.h>
#include <stdbool.h>  //This is used when a boolean data type is needed

int main () {
    printf("Hello I'm on C-Programming \n");
    printf("C17 version \n");

    //Variables = A reusable container for a value
    int age = 2;
    int year = 1997;
    int quantity = 1;

    float gpa = 3.5;
    float pi = 12.14;
    float temperature = -14.6;

    double largeDecimal = 9.1234567890123;

    char grade = 'A';

    //In C theirs nothing luke string data type, we use char array to store string values
    char name[] = "John Doe";
    char food[] = "Amala and Ewedu";

    bool isActive = true;

    printf("You are %d years old \n", age);
    printf("You were born in the year %d \n", year);
    printf("you have ordered %d x items\n", quantity);
    printf("Your GPA is %.1f \n", gpa);
    printf("The value of pi is $%.2f \n", pi);
    printf("The temperature is %.1fºF \n", temperature);
    printf("A large number of decimal number %.15lf \n", largeDecimal);
    printf("Your grade  is %c \n", grade);
    printf("Your name is %s \n", name);
    printf("Your favorite food is %s \n", food);
    printf("%d \n", isActive);


    //Data Types = Different types of variables to store different types of data
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;    // Floating point number
    char myLetter = 'D';        // Character    

    return 0;
}