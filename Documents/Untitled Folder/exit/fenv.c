
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;

char _e(char *buffer, size_t bufsize);
void _en();

int main()
{
    char *buffer;
    size_t bufsize = 32;
   
       
    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);    
    }
    printf("$ ");
    _e(buffer, bufsize);  
      
    return(0);
}



char _e(char *buffer, size_t bufsize)
{
    char *sal = "exit";
    char *envr = "env";
    int comp;

  while(getline(&buffer,&bufsize,stdin))
    {
    comp=(strncmp(buffer, sal, 4));

      if(comp == 0)
     {
         break;
     }

    comp=(strncmp(buffer, envr, 3));

    if(comp == 0)
    {
    _en();
    }

    printf("%s",buffer);
    printf("$");
    }
return(*sal);
}


void _en() {
  int i = 1;
  char *s = *environ;

  for (; s; i++) {
    printf("%s\n", s);
    s = *(environ+i);
  }

}