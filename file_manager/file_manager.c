#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



int main ()
{
  while(1)
  {
     printf("Choose on of these options\n 1 - rm \n 2 - cd \n 3 - cp\n 4 - mv\n 5 - ls\n 6 - grep\n");
     int cmd;
     char path[PATH_MAX];
     scanf ("%d", &cmd); 
     if (cmd == 6)
     {
        printf("Text you want to search - \n");
     }
     else 
     {
       printf("Please specify source file\n");
     }

     scanf ("%s", path);
     char *name ;
     char *target_file;
     
     
     if (cmd == 1)
     { 
        name = (char *)malloc(10);
        strcpy(name,"../bin/rm");
     }
     
     
     else if(cmd == 2)
     {
        printf("Please specify target file\n");
        target_file = (char* )malloc(100);
        scanf("%s",target_file);
        name = (char*)malloc(10);
        strcpy(name,"../bin/cd");
     }
     
     
     else if (cmd == 3)
     {
        printf("Please specify target file\n");
        target_file = (char* )malloc(100);
        scanf("%s",target_file);
        name = (char*)malloc(10);
        strcpy(name,"../bin/cp");
     }
     
     
     else if (cmd == 4)
     {
        printf("Please specify target file\n");
        target_file = (char* )malloc(100);
        scanf("%s",target_file);
        name = (char*)malloc(10);
        strcpy(name,"../bin/mv");
     }
     else if (cmd == 5)
     {
        name = (char*)malloc(10);
        strcpy(name,"../bin/ls");
     }
     
     
     else if (cmd == 6)
     { 
        printf("Please specify target file\n");
        target_file = (char* )malloc(100);
        scanf("%s",target_file);
        name = (char*)malloc(12);
        strcpy(name,"../bin/grep");
     }
     
     
     else 
     {
        fprintf(stderr, "Number is not in range 1 - 6 !");
        exit(1);
     }


//------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------      
        pid_t pid = fork();
        
        if (pid < 0)
        {
           fprintf(stderr, "Fork Failed");
           exit(1);
        }
        if (pid == 0)
        {
           if(target_file)
           {
            char *const args[] = {name,path,target_file,NULL};
            execv(args[0],args);
            exit(1);
           }
           else
           {
            char *const args[] = {name,path,NULL};
            execv(args[0],args);
            exit(1);
           }
        }
        else
        {
        wait(NULL); 
        }
       
    }   


  return 0;
}

