#include<stdio.h>

int main()
{
 int a = 1;
 
 char *p = (char *)&a;
 
 if(*p == 1)
 	printf("\nCPU is little Endian");
 	
 else
 	printf("\nCPU is big Endian");
 	
 return 0;
} 
