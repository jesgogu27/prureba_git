#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char _e(char *buffer, size_t bufsize);

int main()
{
    char *buffer;
    size_t bufsize = 32;
    /*size_t characters;*/
       
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
    int comp;

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
return(*sal);
}
