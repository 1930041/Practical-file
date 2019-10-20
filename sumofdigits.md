#### Program to find the Sum of digits in any positive integer

#include<stdio.h>                                                             
int main()              {  
  
int sum=0,digit;  
long n,temp;  
  
printf("Enter any +ve integer:  ");   
scanf("%ld",&n);  
  
temp=n;  
while(temp>0)                                                                 
{  
digit=temp%10;  
temp/=10;  
sum+=digit;  
}                                                                             
  
printf("\n Sum of digits of %d = %d \n",n,sum);  
  
return 0;  
}

*Code written by Tawanjot Singh ;')*