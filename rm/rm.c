#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>

int main(int argc, char*argv[] ) {

 if (argc < 2) {
     printf("Please add at least 2 arguments!");
     return 1;
 }
 
 int d = strcmp(argv[1],"-f");

 if (d == 0) {
    for (int i = 2;i<argc;++i){
        int result  = remove(argv[i]);
        if(result!=0){
           fprintf(stderr,"Error = %s\n",strerror(errno));
           exit(result);
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
        fprintf(stderr,"errno = %s\n",strerror(errno));
          exit(result);
    }
 }
  return 0;
}
