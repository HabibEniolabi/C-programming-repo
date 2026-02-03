#include <stdio.h>
#include <stdbool.h> //This is used when a boolean data type is needed

int main()
{
  printf("Hello I'm on C-Programming \n");
  printf("C17 version \n");

  // Variables = A reusable container for a value
  int age = 2;
  int year = 1997;
  int quantity = 1;

  float gpa = 3.5;
  float pi = 12.14;
  float temperature = -14.6;

  double largeDecimal = 9.1234567890123;

  char grade = 'A';

  // In C theirs nothing luke string data type, we use char array to store string values
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

  // Data Types = Different types of variables to store different types of data
  int myNum = 5;           // Integer (whole number)
  float myFloatNum = 5.99; // Floating point number
  char myLetter = 'D';     // Character

  // Relational an logical Operator
  int pZ = 5, yZ = 10;
  printf("%d\n", pZ == yZ);
  printf("%d\n", pZ != yZ);
  printf("%d\n", pZ > yZ);
  printf("%d\n", pZ < yZ);
  printf("%d\n", pZ >= yZ);
  printf("%d\n", pZ <= yZ);

  int number = 5;
  int Y = 15;
  printf("%d\n", Y / number); // Outputs 3

  // Conditional Statement
  int cal = 13;
  if (cal < 0)
  {
    printf("YEah yeah \n");
  }
  else if (cal == 14)
  {
    printf("A'ight \n");
  }
  else
  {
    printf("No no \n");
  }

  // Switch Case
  int printDay;
  printf("Enter day number: ");
  scanf("%d", &printDay);

  switch (printDay)
  {
  case 1:
    printf("Sunday \n");
    break;
  case 2:
    printf("Monday \n");
  case 3:
    printf("Tuesday \n");
  case 4:
    printf("Wednesday \n");
  case 5:
    printf("Thursday \n");
  case 6:
    printf("Friday \n");
  case 7:
    printf("Saturday \n");

  default:
    printf("Workday \n");
    break;
  }

  return 0;
}