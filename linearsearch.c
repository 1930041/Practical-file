//Program to implement Linear Search

#include<stdio.h>  
int main()  
{  
int i,m,a[25],n;  
  
printf("Enter the length of array:  ");  
scanf("%d",&m);  
printf("Enter %d elements:  ",m);  
for(i=0;i<m;i++)  
scanf("%d",&a[i]);  
printf("Enter the number you wish to find:  ");  
scanf("%d",&n);  
  
for(i=0;i<m;i++)  
{  
if(a[i]==n)   
{  
printf("Search is successful. Element present at #%d\n",i+1);     //As array numbering begins from 0, so it needs to be incremented by 1   
break;  
}  
}  
if(i==m)      
printf("Search is unsuccessful.\n");    //Test expression has turned false, which means desired element wasn't found  
  
return 0;  
  
}

//Code written by Tawanjot Singh ;')
