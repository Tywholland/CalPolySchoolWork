/* Lawn cutting time program */
/* Made by Tyler Holland, CPE 101-01/02 */
/* Created on 10/5/08 */

/* Declarations */
#include <stdio.h>
#define GRASS_CUT_RATE 2

/* Start Function */
int main(void)
{

/* Variables */
   int yardLength; /* Length of the yard in feet */
   int yardWidth; /* Width of the yard in feet */
   int houseLength; /* Length of the house in feet */
   int houseWidth; /* Width of the house in feet */
   int yardArea; /* Area of the yard in square feet */
   int houseArea; /* Area of the house in square feet*/
   int totalArea; /* Total area of the grass to be cut */
   int tempSeconds; /* Total time in seconds, needs to be put into minutes */
   int finalSeconds; /* Final time in seconds with minutes/hours subtracted */
   int tempMinutes; /* Total time in minutes, needs to be put into hours */
   int finalMinutes; /* Final time in minutes with hours subtracted */
   int finalHours; /* Final time in hours */

/* Get values */
   printf("Enter the length and width of the yard, seperated by a space: ");
   scanf("%d %d", &yardLength, &yardWidth);

   printf("Enter the length and width of the house, seperated by a space: ");
   scanf("%d %d", &houseLength, &houseWidth);

/* Calculations */
   /* Calculate Areas and get total area */
   yardArea = yardLength * yardWidth;
   houseArea = houseLength * houseWidth;
   totalArea = yardArea - houseArea;
   /* Calculate raw seconds */
   tempSeconds = totalArea / GRASS_CUT_RATE;
   /* Convert seconds into minutes */
   tempMinutes = tempSeconds / 60;
   finalSeconds = tempSeconds % 60;
   /* Convert minutes into hours */
   finalHours = tempMinutes / 60;
   finalMinutes = tempMinutes % 60;

/* Display results to output - Screen */
   printf("The total amount of grass to be cut is %d square feet.\n", totalArea);
   printf("The amount of time it will take to cut the grass is:\n");
   printf("%d hours, %d minutes and %d seconds.\n", finalHours, finalMinutes, finalSeconds);

return(0);

}

   
   
   
