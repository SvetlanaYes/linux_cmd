#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

int main(int argc, char*argv[] ) {
 if (argc < 2) {
   printf("Error");
   return 1;
 }
 int d = strcmp(argv[1],"-f");

if (d == 0) {
   for (int i = 2;i<argc;++i){
    int result  = remove(argv[i]);

    
    if(result!=0){

       
      printf("Something is wrong!\n");
    }
    else 
     {
      printf("%d directory is removed \n,",i - 1);
 
   }
  }
  return 0;
}
 
 for (int i = 1;i<argc;++i){
    DIR* directory = opendir(argv[i]);
    if(directory!=NULL){
     closedir(directory);
     printf(" -f is missing\n");
     return 0;
     }
     
    int result  = remove(argv[i]);
    if(result!=0){
      printf("Cannot remove file %d\n",i);
    }
    else 
     {
      printf("%d File successfully removed\n",i);
 
   }
  }
 
  return 0;
}
