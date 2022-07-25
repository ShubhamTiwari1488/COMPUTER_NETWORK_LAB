#include<stdio.h>
#include<stdlib.h>

struct student
{
 int rollno;
 char name[50];
 int marks[3];
};


int Sum(struct student stud)
{
 int sum = 0;
 
 for(int i=0;i<3;i++)
 {
  sum +=stud.marks[i];
 }
 
 return sum;
}

float Avg(struct student stud)
{ 
 int sum = Sum(stud);
 
 return sum/3;
}

int main()
{
 struct student *stud,stud_1;
 int sum ;
 float avg;
 
 stud = (struct student *)malloc(sizeof(struct student));
 
 printf("\nEnter the name : ");
 scanf("%[^\n]s",stud->name);
 
 printf("\nEnter the roll no : ");
 scanf("%d",&stud->rollno);
 
 for(int i=0;i<3;i++)
 {
  printf("\nEnter the mark %d : ",i+1);
  scanf("%d",&stud->marks[i]);
 }
 
 
 printf("\nDisplaying the details : \n");
 
 printf("\nRoll is : %d\nName is : %s\nMarks are : ",stud->rollno,stud->name);
 
 for(int i=0;i<3;i++)
 {
  printf("%d ",stud->marks[i]);
 }
 
 printf("\n");
 
 stud_1 = *stud;
 
 sum = Sum(stud_1);
 avg = Avg(stud_1);
 
 printf("\nThe sum and avg is : %d and %.2f\n",sum,avg);
 
 return 0;
} 
