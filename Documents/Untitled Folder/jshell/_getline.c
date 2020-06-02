#include <string.h>
#include <stdio.h>

extern char **environ;

int main () {
   /*char str[80] = "This is = www.tutorialspoint.com - website";*/
   const char se[2] = {"="};
   char *p= "PATH";
   char *token, *str=NULL, r[120];
   int comp;
   /* get the first token */
  
   
    int i = 1;
  char *s = *environ;
  for (; s; i++) 
  {
    /*printf("%s\n", s);*/
    s = *(environ+i);
   str=s;  
    
    
   token = strtok(str, se);
   /* walk through other tokens */

   while( token != NULL ) {

   	comp=(strncmp(token, p, 8));
   		if(comp== 0)
   		{
   		    r = s[50];
   		    printf( "cadena %s\n", r);
  		break;
  	}
    	else
     { token = strtok(NULL, s);}
   }
}
   
   return(0);
}