#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
int main()
{
   char sentence[1300];
   FILE *input, *output;

   input = fopen("bINPUT.txt","r");
   fscanf(input, "%[^\n]s", sentence);
   output=fopen("OUTPUTb.txt","w");

   char *final=strtok(sentence,"  ");
   while (final!=NULL){
		fputs(final,output);
        fputs(" ",output);

       final =strtok(NULL,"  ");
   }

   fclose(output);

   return 0;
}



