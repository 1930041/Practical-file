#### Program to calculate the Sum of first 100 Even & Odd integers separately

#include<stdio.h>  
int main()              {  
  
int esum=0, osum=0, n=1;  
while(n<=100)  
{  
if(n%2==0)  
esum+=n;  
  
else  
osum+=n;  
  
n++;  
}  
printf("Sum of even numbers in first 100 +ve integers = %d\n",esum);  
printf("Sum of odd numbers in first 100 +ve integers = %d\n",osum);  
  
return 0;  
}

*Code written by Tawanjot Singh ;')*