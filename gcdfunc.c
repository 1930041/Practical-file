//Program to find the GCD of 2 integers, by defining a function

#include<stdio.h>  
int gcd(int a,int b)  
{  
int c;  
c=a%b;  
if(c==0)  
return b;  
else  
gcd(b,c);    //Function gcd calls itself if b is not the GCD 
}  
int main()  
{  
int m,n,c;  
scanf("%d %d",&m,&n);  
c=gcd(m,n);  
printf("\nGCD is %d.\n",c);  
  
return 0;  
}

//Code written by Tawanjot Singh ;')
