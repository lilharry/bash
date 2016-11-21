#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(){

  char *s = (char*)malloc(sizeof(s));
  fgets(s, sizeof(s), stdin);
  s = strsep(&s, "\n");
  
  
  printf("input: %s\n",s);
   
  
  char * command [100];

  int i=0;
  command[0]="a";
  while (command[i] = strsep(&s," ")){
    i++;
  }
  
 
  execvp(command[0],command);
  return 0;
}
