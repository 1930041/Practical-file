#### Program to display colour name corresponding to the character

#include<stdio.h>  
int main()              {  
  
char code;  
printf("Enter color code:  ");  
scanf(" %c",&code);  
  
switch(code)    {  
case 'y':       printf("Yellow Color\n");  
                break;  
case 'r':       printf("Red Color\n");  
                break;  
case 'b':       printf("Blue Color\n");  
                break;  
default:        printf("Wrong Color\n");  
}  
return 0;  
  
}

*Code written by Tawanjot Singh ;')*