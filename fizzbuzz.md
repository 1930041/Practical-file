#### Program for FizzBuzz game till 30

#include<stdio.h>  
int main()              {  
  
for(int d=1; d<=30; d++)                {  
  
if(d%3==0 && d%5==0)  
printf("FizzBuzz\n");  
  
else if(d%3==0)  
printf("Fizz\n");  
  
else if(d%5==0)  
printf("Buzz\n");  
  
else  
printf("%d\n",d);  
  
}  
return 0;  
  
}

*Code written by Tawanjot Singh ;')*