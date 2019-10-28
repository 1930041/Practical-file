//Program to store particulars of Employee using Structure & display using members of structure with dot operator

#include<stdio.h>

struct employee     //Structure definition
{
int code;
char name[25];
char dept[15];
float salary;
};

void main()
{
struct employee Aemployee;      //Declaration of structure variable
printf("Enter Employee's code:  ");
scanf("%d",&Aemployee.code);      //Storing fetched data in member of structure using dot operator
printf("Enter Employee's name:  ");
scanf("%s",&Aemployee.name);
printf("Enter Employee's department:  ");
scanf("%s",&Aemployee.dept);
printf("Enter Employee's salary:  ");
scanf("%f",&Aemployee.salary);

printf("Particulars of Employee are\n");
printf("Employee's code:  %d\nEmployee's name:  %s\nEmployee's department:  %s\nEmployee's salary:  %.2f\n\n",Aemployee.code,Aemployee.name,Aemployee.dept,Aemployee.salary);

}

//Code written by Tawanjot Singh ;')
