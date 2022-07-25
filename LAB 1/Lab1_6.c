#include<stdio.h>

int add(int *a,int *b)
{
 return *a+*b;
}

int main()
{
 int a = 5,b = 9;
 
 int sum = add(&a,&b);
 
 printf("\nThe sum is : %d\n",sum);
 
 return 0;
} 
