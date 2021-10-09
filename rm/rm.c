#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char**argv ) {
 if (argc < 2) {
   printf("Error");
   return 1;
 }

 
 for (int i = 1;i<argc;++i){
  
    int result  = remove(argv[i]);
    if(result!=0){
      printf("Error\n");
    }
    else 
     {
      printf("Ok\n");
 
   }
  }
 
  return 0;
}

