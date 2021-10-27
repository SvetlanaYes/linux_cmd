#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

 
int isReg(char* path){
  struct stat S;
  stat(path,&S);
  return S_ISREG(S.st_mode);
}

void ls(char *path){
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
         printf("%s\n",tmp);
       
         if(isReg(tmp)!=0){
           printf("--%s\n",struct_->d_name);
          }
        else{
          int j = 0;
          printf("[%s]\n",struct_->d_name);
 
           ls(tmp);
 
          
        }
       
      }
   }
   closedir(directory);
}
   int main(int argc,char*argv[]){
     if(argc < 2 ) {
       printf("Specify correct arguments!\n");
       return 1;
     }
     int i = 1;
     while(i<argc) {
       if(isReg(argv[i]))
         printf("%s\n",argv[i]);
       else
         ls(argv[i]);
       ++i;
       }
       return 0 ;
   }
