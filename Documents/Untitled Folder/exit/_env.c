#include<stdio.h>
#include<string.h> 

extern char **environ;

int main() {
  int i = 1;
  char *s = *environ;
  for (; s; i++) 
  {
    /*printf("%s\n", s);*/
    s = *(environ+i);
    char * p[]= s;  
    
      printf("%s\n", p); 

  }


  return 0;
}


