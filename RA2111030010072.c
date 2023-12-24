#include<stdio.h>
int main()
{
int marks,i;
invalid:for(i=0;i<5;i++)
{
printf("\nEnter your marks in subject %d\n",i+1);
scanf("%d",&marks);
 if (marks>=90 && marks<=100)
    {
        printf("Congratulations you passed the exam.Your grade O\n");
    }
    else if (marks>=80 && marks<90)
    {
        printf("Congratulations you passed the exam.Your grade A\n");
    }

     else if (marks>=70 && marks<80)
    {
        printf("Congratulations you passed the exam.Your grade B\n");
    }
     else if (marks>=60 && marks<70)
    {
        printf("Congratulations you passed the exam.Your grade C\n");
    }
     else if (marks>=50 && marks<60)
    {
        printf("Congratulations you passed the exam.Your grade D\n");
    }
     else if (marks>=35 && marks<50)
    {
        printf("Congratulations you passed the exam.Your grade E\n");
    }
    else if (marks>=0 && marks<35)
    {
        printf("You have failed this subject\n");
    }
    else
    {
        printf("Please enter valid marks\n");
        goto invalid;
    }
}
}
