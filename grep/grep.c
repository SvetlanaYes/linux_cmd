#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
 
 #ifndef MAX_BUF
#define MAX_BUF 200
#endif



void search_text_in_file(const char* file , char* string)
{
   FILE *fp = fopen(file,"r");
   if (!fp)
   {
     printf("No such file or directory");
     return;
   }
  int line_size = 300;
  char* line = malloc(line_size);
   while( fgets( line,line_size, fp ) )
    {
        if( strstr( line, string) )
           printf( "%s", line);
    }
    fclose( fp );
 }
 

int isReg(const char* path){
  struct stat S;
  stat(path,&S);
  return S_ISREG(S.st_mode);
}


void ls(const char *path , char* string){
   DIR* directory = opendir(path);
   if(directory!=NULL){
      struct dirent* struct_;
      while((struct_ = readdir(directory))!=NULL){
        if(strcmp(struct_->d_name,"..") == 0 ||strcmp(struct_->d_name,".") == 0 )
            continue;
         char tmp[1024] ;
         char *name = struct_->d_name;
         getcwd(tmp,sizeof(tmp));
         char s = '/';
         int len = strlen(tmp);
         if(tmp[len-1] !='/') 
            strncat(tmp,&s,1);
         if(!(strlen(path)>4 && path[0] == '/' && path[1] == 'h' &&path[2] == 'o' && path[3] =='m'&& path[4] == 'e'))
            strncat(tmp,path,strlen(path));
         else
           strcpy(tmp, path);
         len = strlen(tmp);
         if(tmp[len-1] != '/')
            strncat(tmp,&s,1);
         strncat(tmp,name,strlen(name));
       
         if(isReg(tmp)!=0){
           search_text_in_file(tmp,string);
          }
        else{
          ls(tmp, string); 
        }
       
      }
   }
   closedir(directory);
}



int main(int argc,char*argv[]){
     if (argc != 3 ) {
       printf("Specify correct arguments!\n");
       return 1;
     }
     if(isReg(argv[2]))
     {
       search_text_in_file(argv[2], argv[1]);
     }
     else
     {
       ls(argv[2],argv[1]);
     }

     return 0;
   }
       
