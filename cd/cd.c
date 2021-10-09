#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc,char **argv) {
  printf("argc = %d\n" ,argc);
 if (argc != 2)
 {
    printf("Please specify correct arguments\n");
    return 1;
 }
 char s[100];
 printf("Current directory is %s\n",getcwd(s,100));
 int result = chdir(argv[1]);
 if (result!=0) {
    printf("Cannot change directory to %s\n",argv[1]);
    return 0;
    
 }
 else {
    printf("OK\n");
 }
 printf("Directory correctly changed to %s\n",getcwd(s,100));
  return 0;
}

