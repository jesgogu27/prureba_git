#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

int input(char *s,int length);

int main()
{
    char *buffer, *sal = "exit";
    size_t bufsize = 32;
    /*size_t characters;*/
    int comp;
   
    


    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);    
    }
     
    printf("$ ");
    while(getline(&buffer,&bufsize,stdin))
    {
    
    /*characters = getline(&buffer,&bufsize,stdin);*/
    /*printf("%zu characters were read.\n",characters);*/
    
    
    comp=(strncmp(buffer, sal, 4));

      
      if(comp == 0)
     {
         break;

     }
    printf("%s",buffer);
    printf("$");
    }
    return(0);
}
