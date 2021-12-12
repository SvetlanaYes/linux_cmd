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
#include <libgen.h>
#include <stddef.h>


int main(int argc, char* argv[]) {
  char* path_name_without_file_manager;
  char argument[PATH_MAX];
  strcpy(argument,argv[0]);
  if (argv[0][0] =='.')
  {	
   char name[PATH_MAX];
   char current_dir[PATH_MAX];
   getcwd(current_dir,sizeof(current_dir));
   for (int i = 0 ; i < strlen(argv[0]);++i)
   {
    name[i] = argv[0][i + 1];
   }
   strcat(current_dir,name);
   path_name_without_file_manager = dirname(current_dir);
  }
  else
  {
     path_name_without_file_manager = dirname(argv[0]);
  }
  char path_without_file_manager[PATH_MAX];
  strcpy(path_without_file_manager,path_name_without_file_manager);
  while (1)

  {
    int cmd;
    char path[PATH_MAX];
    char target_file[PATH_MAX];
    char file[PATH_MAX];
    printf("Choose on of these options\n 1 - rm \n 2 - cd \n 3 - cp\n 4 - mv\n 5 - ls\n 6 - grep\n");


    scanf("%d", & cmd);
    
    if (cmd == 6)
    {
      printf("Text you want to search - \n");
    } 
    
    else
    {
      printf("Please specify source file\n");
    }
    

    scanf("%s", path);
    strcpy(target_file,"");
    strcpy(file,path_without_file_manager);
  
    if (cmd == 1)
    {
       strcat(file,"/rm\0");
    } 
    else if (cmd == 2)
    {
      strcat(file,"/cd\0");
    }
    else if (cmd == 3)
    {
      printf("Please specify target file\n");
      scanf("%s", target_file);
      strcat(file,"/cp\0");
    }
    else if (cmd == 4)
    {
      printf("Please specify target file\n");
      scanf("%s", target_file);
      strcat(file,"/mv\0");
    }
    else if (cmd == 5)
    {
      strcat(file,"/ls\0");
    }
    else if (cmd == 6)
    {
       printf("Please specify target file\n");
       scanf("%s", target_file);
       strcat(file,"/grep\0");
    }
    else
    {
      fprintf(stderr, "Number is not in range 1 - 6 !");
      exit(1);
    }
   
    pid_t pid = fork();

    if (pid < 0)
    {
      fprintf(stderr, "Fork Failed");
      exit(1);
    }

    if (pid == 0)
    {

     
      if (strcmp(target_file,""))
      {
        char *const args[] = {
            file,
            path,
            target_file,
            NULL
          };

        execv(args[0], args);
        exit(1);
      } 
      else
      {
        char *const args[] = {
            file,
            path,
            NULL
          };
        execv(args[0], args);
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
