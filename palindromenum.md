#### Program to detect whether the entered number is a Palindrome or not

#include<stdio.h>  
int main()  
{  
int sum=0,digit;  
int n,temp;  
printf("\nEnter any +ve integer:  ");                                         
scanf("%d",&n);  
temp=n;  
  
while(temp>0)  
{                                                                             
digit=temp%10;  
temp/=10;  
sum=sum*10+digit;  
}  
if(n==sum)                                                                    
printf("\n%d is a palindrome number.\n",n);  
else  
printf("\n%d is not a palindrome number.\n",n);  
  
return 0;  
}

*Code written by Tawanjot Singh ;')*