#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(){

  char *s = (char*)malloc(sizeof(s));
  fgets(s, sizeof(s), stdin);
  strtok(s, "\n");
  printf("hello \n");
  char *command [17];

  int i=0;
  command[0]="a";
  while (*command[i]){
    command[i]=strsep(&s, " ");
    printf("%s", command[i]);
    i++;
  }
      command[i]=NULL;

  
  char *file=command[0];
  (*command)++;
  errno=execvp(command[0], command);
  printf("%s \n", strerror(errno));
  printf("exists ? \n");
  return 0;
}
