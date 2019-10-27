//Call by Reference demonstration

#include<stdio.h>  
void swap( int * , int * );    //Function declaration  
  
void main()  
{  
int x,y;  
printf("\nEnter value for x:  ");  
scanf("%d",&x);  
printf("\nEnter value for y:  ");  
scanf("%d",&y);  
printf("\nBefore calling swap function\n");  
printf("\nValue of x=%d, value of y=%d\n",x,y);  
  
swap(&x,&y);    //Function call, with addresses of x & y 
  
printf("\nAfter returning from swap function\n");  
printf("\nValue of x=%d, value of y=%d\n",x,y);    //Interchanged, due to their addresses being swapped  
}
void swap(int *a,int *b)    //Pointer variables required to point to addresses 
{    //Function definition
int temp;  
printf("\nInside the function\n");  
printf("\nValue of *a=%d, value of *b=%d before swap\n",*a,*b);  
temp=*a;  
*a=*b;  
*b=temp;  
printf("\nValue of *a=%d, value of *b=%d after swap\n",*a,*b);  
}

//Code written by Tawanjot Singh ;')
