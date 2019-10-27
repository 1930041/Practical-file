//Program to display Table of 2 as per format given

#include<stdio.h>  
int main()              {  
  
int n=1,product=2;  
  
printf("\tTable of 2\n");  
printf("\t==========\n\n");  
  
for(; n<=10; n++,product+=2)  
if(n<=4)    
printf("  2 x  %d =   %d  2 x  %d =  %d\n", n, product, n+10, product+20);  
else if(n<=9)  
printf("  2 x  %d =  %d  2 x  %d =  %d\n", n, product, n+10, product+20);  
else   
printf("  2 x %d =  %d  2 x  %d =  %d\n", n, product, n+10, product+20);  
  
printf("\nPress any key to continue...\n");  
  
return 0;  
}

//Code written by Tawanjot Singh ;')
