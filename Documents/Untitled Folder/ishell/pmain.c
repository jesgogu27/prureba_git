#include <stdio.h>
#include <string.h>
#include<unistd.h> 
#include<fcntl.h> 

int main(void)
{

    
    char buf1[12] = "hello world"; 
    char c;
    char sltln[2]= "LF";
    for(int i=0; buf1[i] != '\0'; i++)
    {
     c=buf1[i];
     write(1, &c, 1);
    }
    write(1, &sltln, 1);
    return (0);
}