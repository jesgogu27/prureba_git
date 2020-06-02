/* malloc example: random string generator*/
#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* malloc, free, rand */
#include <string.h>

char **_split_string(char *line);
extern char **environ;

int main () {
	int i = 1;
  char *s = *environ, *p=NULL;
  for (; s; i++) {
    /*printf("%s\n", s);*/
    s = *(environ+i);
    p = s;
    _split_string(p);
	
}
return 0;
}

char **_split_string(char *line)
{
  int i;
  char *piece;
  char **pieces = malloc(sizeof(char) * 1024);

  piece = strtok(line,"=");
  i = 0;
  while (piece)
  {
    while (piece != NULL)
    {
      pieces[i] = piece;
      i++;
      piece = strtok(NULL," \n");
    }

  }


  return (pieces);
}
