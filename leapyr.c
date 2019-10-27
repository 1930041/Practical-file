//Program to detect leap year

#include<stdio.h>    
int main()              {
  
int year;  
printf("Enter an year:  ");  
scanf("%d",&year);  
  
if(year%4==0)    //Only considering the simple condition as asked to
printf("Leap Year\n");  
  
else   
printf("Not a Leap Year\n");  
  
return 0;  
}

//Code written by Tawanjot Singh ;')
