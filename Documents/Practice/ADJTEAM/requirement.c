#include "adjteam.h"


FILE *f;
char temp[1000];
int cont=0;

typedef taxi *newtaxi;


f = fopen("Lista de Taxis Afiliados.csv");
if( f== NULL)
{
printf("no se ha logrado abrir el archivo");
exit(1);
}

while(!feof(f))
{
fgets(temp,1000,f);
cont++;Lista de Taxis Afiliados.csv
}
rewind(f);

newtaxi = (taxi*)malloc(cont*sizeof(taxi));

if(newtaxi ==NULL)
{
printf(""
}
