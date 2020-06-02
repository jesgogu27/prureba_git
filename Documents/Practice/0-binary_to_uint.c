#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{


int con=0, i=0;



while (b[i] != '\0')
{

if ((b[i] != 49) && (b[i] != 48))
{
printf("%i\n", b[i]);
return(0);
}


if(b[i] != 48)
{
con++;
pot= con * con;

}
else
{
printf("valor dentro del puntero cuando es cero %i\n", b[i]);
con++;
printf("contando en cero %i\n", con);
}
i++;
printf("el valor de i es  %i\n", i);


}
printf("\n");
return (0);
}
