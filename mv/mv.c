#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>


#define SAME_INODE(a, b) ((a).st_ino == (b).st_ino && (a).st_dev == (b).st_dev)



int main(int argc, char **argv)
{

  struct stat statbuf_src, statbuf_dest;
  char *src, *dest, *new_src, *new_dest;
  char *current_directory;

  if (argc != 3) {
    fprintf(stderr, "usage: %s src dest\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  src = malloc(strlen(argv[1]) + 1);
  dest = malloc(strlen(argv[2]) + 1);
  strcpy(src, argv[1]);
  strcpy(dest, argv[2]);

  stat(src, &statbuf_src);
  stat(dest, &statbuf_dest);

  current_directory = getenv("PWD");



  new_src = malloc(strlen(src) + 1 + strlen(current_directory) + 1);
  strcpy(new_src,current_directory);
  strcat(new_src,"/");
  strcat(new_src,src);


  new_dest = malloc(strlen(dest) + 1 + strlen(current_directory) + 1 + strlen(src) + 1);
  strcpy(new_dest,current_directory);
  strcat(new_dest,"/");
  strcat(new_dest,dest);
  strcat(new_dest,"/");
  strcat(new_dest,src);


  if(rename(new_src,new_dest) != 0){
    fprintf(stderr,"rename failed with error %s\n",strerror(errno));
  }

  free(new_src);
  free(new_dest);
  free(src);
  free(dest);

  exit(EXIT_SUCCESS);
}
