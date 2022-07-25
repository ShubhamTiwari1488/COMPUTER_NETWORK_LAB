#include<stdio.h>

void swap(int *a,int *b)
{
 int temp = *a;
 
 *a = *b;
 
 *b = temp;
}

int main()
{
 int a,b;
 
 printf("\nEnter the numbers : ");
 scanf("%d %d",&a,&b);
 
 swap(&a,&b);
 
 printf("\nThe numbers after swapping the numbers are : %d and %d\n",a,b);
 
 return 0;
}  
