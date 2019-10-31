//Program to display the Factorial of entered number

#include<stdio.h>
int main()
{
int n,i, fac=1;
printf("Enter number which you want to get factorial of:  ");
scanf("%d",&n);

for(i=n;i>1;i--)    //i>0 can also be set as test expression, but multiplying with 1 changes nothing
fac*=i;

printf("\n%d! = %d\n",n,fac);

return 0;
}

//Code written by Tawanjot Singh ;')
