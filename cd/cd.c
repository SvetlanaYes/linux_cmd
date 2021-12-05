#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
int main(int argc,char **argv) {
 if (argc == 1)
 {
  chdir("/");
  return 0;
 }
 else if (argc == 2){
 char s[PATH_MAX]; 
 printf("Current directory is %s\n",getcwd(s,100));
 int result = chdir(argv[1]);
 if (result!=0) {
    printf("Cannot change directory to %s\n",argv[1]);
    return 0;
 }
 }
 else 
 {
  fprintf(stderr,"0 or more than 2 arguments");
  exit(1);
 }

  return 0;
}

