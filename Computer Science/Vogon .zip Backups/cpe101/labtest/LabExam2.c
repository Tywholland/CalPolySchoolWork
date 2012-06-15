/* Lab exam 2! */
/* Made by Tyler Holland */

/* Declarations */
#include <stdio.h>
#define CHARS 57 /* # of chars in infile */

/* Start Main */
int main(void)
{
   /* Variables */
   FILE *infilep;  /* Characters.txt */
   FILE *outfilep; /* ReverseCharacters.txt */
   char temp; /* Temp scan char */
   char reverse[CHARS]; /* Temporary character for copying */
   int eh;
   int status; /* EOF checker */
   int i; /* helps with scans */

   /* open files */
   infilep = fopen("Characters.txt", "r");
   outfilep = fopen("ReverseCharacters.txt", "w");

   /* scan in chars to array */
   i = 1;
   do {
      status = fscanf(infilep, "%c", &temp);
      reverse[CHARS - i] = temp;
      i++;
   } while(status != EOF);

   /* Print to outfile */
   for (i = 0; i < CHARS; i++) {
      fprintf(outfilep, "%c", reverse[i]);
   }

   fclose(infilep);
   fclose(outfilep);

   return(0);
}
