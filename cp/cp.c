#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc,char *argv[]) {

   if (argc != 3) 
   {
     printf("Please specify correct arguments\n");
     return 1;
   }
   FILE *sourcefile = fopen(argv[1],"r");
   if (!sourcefile)
   {
       printf("Source file doesn't exist");
       return 1;
       }
       FILE *targetfile = fopen(argv[2],"w");
       if (targetfile) 
       {
         char c;
         while((c = fgetc(sourcefile))!=EOF)
         {
          fputc(c,targetfile);
         }
       }
          fclose(sourcefile);
          fclose(targetfile);
   }
  return 0;
}
