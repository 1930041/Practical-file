//Program to check whether entered number is Prime or not

#include<stdio.h>  
int main()  
{  
int n,i,res=0;  
printf("Enter the number you wish to check:  ");  
scanf("%d",&n);  
  
for(i=2;i<=n/2;i++)    //n/2 in test expression to reduce comparisons as each number's factors apart from itself & 1 are from 2 to n/2 only
{  
if(n%i==0)  
res=1;  
  
break;  
}  
if(res==0)  
printf("Entered number is Prime.\n");  
else  
printf("Entered number is NOT Prime.\n");  
  
return 0;  
}  

//Code written by Tawanjot Singh ;')
