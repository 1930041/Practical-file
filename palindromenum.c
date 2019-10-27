//Program to detect whether the entered number is a Palindrome or not

#include<stdio.h>  
int main()  
{  
int rev=0,digit;  
int n,temp;  
printf("\nEnter any +ve integer:  ");                                         
scanf("%d",&n);  
temp=n;  
  
while(temp>0)  
{                                                                             
digit=temp%10;    //Stores one's place
temp/=10;    //Stores number removing one's place
rev=rev*10+digit;    //Forms reversed number digit-by-digit
}  
if(n==rev)                                                                    
printf("\n%d is a palindrome number.\n",n);  
else  
printf("\n%d is not a palindrome number.\n",n);  
  
return 0;  
}

//Code written by Tawanjot Singh ;')
