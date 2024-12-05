//write a c program to convert temperature from degree Celsius to Fahrenheit

#include <stdio.h>

int main() 
{
float celsius, fahrenheit;

printf("Please Enter temperature in Celsius: \n");
scanf("%f", &celsius);

fahrenheit = ((celsius * 9) / 5) + 32;

printf("\n%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

return 0;
}
