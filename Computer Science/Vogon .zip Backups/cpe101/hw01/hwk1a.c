/* A program to convert degrees Fahrenheit to degrees Celsius */
/* Made by Tyler Holland, CPE101-01/02 */
/* Created on 10/5/08 */

/* Declarations */
#include <stdio.h>

/* Start function */
int main(void)
{
/* variables */
   int fahrenheit; /* temperature in degrees Fahrenheit */
   double celsius; /* temperature in degrees Celsius */

/* Get numbers */
   printf("Enter the temperature in degrees Fahrenheit: ");
   scanf("%d", &fahrenheit);

/* Calculate */
   celsius = (5.0/9.0) * (fahrenheit - 32);

/* Output to screen */
   printf("Your temperature in degrees Celsius: %f\n", celsius);

   return(0);

}


