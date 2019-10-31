//Program to calculate the Average of 'n' numbers

#include<stdio.h>
int main()
{
int n,i,a[50];
float sum=0,avg;
printf("Enter number of elements:  ");
scanf("%d",&n);
printf("Enter %d elements:  ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
avg=sum/n;
printf("Average is %.2f.\n",avg);

return 0;
}

//Code written by Tawanjot Singh ;')
