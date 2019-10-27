//Call by Value demonstration

#include<stdio.h>  
void swap(int a,int b);    //Function declaration 
  
void main()  
{  
int x,y;  
printf("\n Enter value for x:  ");  
scanf("%d",&x);  
printf("\n Enter value for y:  ");  
scanf("%d",&y);  
  
printf("\n Before calling swap function\n");  
printf("\n Value of x = %d, value of y = %d\n",x,y);  
  
swap(x,y);    //Function called, with only values of x & y
  
printf("\n After returning from swap function");  
printf("\n Value of x = %d, value of y = %d\n",x,y);    //No change as addresses of x & y were not involved 
}  

void swap(int a,int b) 
{    //Function definition within braces
int temp;  
printf("\n Inside the function\n");  
printf("\n Value of a = %d, value of b = %d before swap\n",a,b);  
temp=a;  
a=b;  
b=temp;  
printf("\n Value of a = %d, value of b = %d after swap\n",a,b);  
}

//Code written by Tawanjot Singh ;')
