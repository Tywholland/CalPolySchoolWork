/* Answers: 5 column sums will be displayed, 3 elements per sum */
/* Sum of columns in an array program, chapter 8 problem 8 */
/* Made by Tyler Holland, CPE101-01/02 */

/* Declarations */
#include <stdio.h>

/* Start main function */
int main(void)
{
   /* Variables */
   double table[5][3]; /* 5x3 array initialized */
   double sum1; /* sum of row 1 */
   double sum2; /* sum of row 2 */
   double sum3; /* sum of row 3 */
   double sum4; /* sum of row 4 */
   double sum5; /* sum of row 5 */

   /* Initialize table */
   table[0][0] = 1.0; /* row 1 */
   table[1][0] = 2.0;
   table[2][0] = 3.0;
   table[3][0] = 4.0;
   table[4][0] = 5.0;

   table[0][1] = 6.0; /* row 2 */
   table[1][1] = 7.0;
   table[2][1] = 8.0;
   table[3][1] = 9.0;
   table[4][1] = 10.0;

   table[0][2] = 11.0; /* row 3 */
   table[1][2] = 12.0;
   table[2][2] = 13.0;
   table[3][2] = 14.0;
   table[4][2] = 15.0;

   /* Add rows */
   sum1 = table[0][0] + table[0][1] + table[0][2];
   sum2 = table[1][0] + table[1][1] + table[1][2];
   sum3 = table[2][0] + table[2][1] + table[2][2];
   sum4 = table[3][0] + table[3][1] + table[3][2];
   sum5 = table[4][0] + table[4][1] + table[4][2];

   /* Print results to screen */
   printf("Column 1 sum = %f\n", sum1);
   printf("Column 2 sum = %f\n", sum2);
   printf("Column 3 sum = %f\n", sum3);
   printf("Column 4 sum = %f\n", sum4);
   printf("Column 5 sum = %f\n", sum5);

   return(0);
}
