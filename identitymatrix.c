//Program to display an Identity matrix of required order

#include<stdio.h>  
void main()  
{  
int matrix[10][10],sr,sc;  
printf("Enter the size of Matrix as m,n:  ");  
scanf("%d%d",&sr,&sc);  
  
for(int i=0;i<sr;i++)  
{  
printf("\n");  
for(int j=0;j<sc;j++)  
{  
if(i==j)  
matrix[i][j]=1;    //Displaying 1 at diagonal positions only
else  
matrix[i][j]=0;  
  
printf("%d ",matrix[i][j]);                                                   
}  
}  
printf("\n\n");  
}

//Code written by Tawanjot Singh ;')
