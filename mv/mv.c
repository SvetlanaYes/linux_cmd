#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc,char *argv[]) {

if(argc != 3)
{
  printf("Please specify correct arguments\n");
  return 1;
} 

if (rename(argv[1],argv[2])!=0)
{
 printf("Programm cannot move %s to %s",argv[1],argv[2]);
 return 1;
}  
printf("%s is successfully moved to %s",argv[1],argv[2]);
return 0;
}
