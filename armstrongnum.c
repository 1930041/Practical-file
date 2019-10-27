//Program to check whether entered integer is an Armstrong number or not

#include<stdio.h>  
int main()  
{  
int n,temp,digit,sum=0;  
printf("Enter any positive integer:  ");  
scanf("%d",&n);  
temp=n;  
while(temp>0)  
{  
digit=temp%10;  
temp/=10;  
sum+=digit * digit * digit;  
}  
if(n==sum)  
printf("The entered number is an Armstrong number.\n");  
else  
printf("The entered number is not an Armstrong number.\n");  
  
return 0;  
}

//Code written by Tawanjot Singh ;')
