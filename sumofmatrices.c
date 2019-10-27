//Program to display resultant matrix after sum of 2 entered matrices

#include<stdio.h>  
void main()  
{  
int m,n,i,j;  
float m1[10][10],m2[10][10],m3[10][10];  
printf("Enter size of Matrix A & B as m,n:  ");  
scanf("%d%d",&m,&n);  
  
printf("Enter elements of Matrix A row wise\n\n");  
  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
scanf("%f",&m1[i][j]);  
}  
printf("Enter elements of Matrix B row wise\n\n");  
  
for(i=0;i<m;i++)                                                               
{  
for(j=0;j<n;j++)    //Matrices to be added must have the same order 
scanf("%f",&m2[i][j]);  
}  
printf("The resultant matrix:\n");                                            
  
for(i=0;i<m;i++)  
{  
printf("\n");  
for(j=0;j<n;j++)                                                              
{  
m3[i][j]=m1[i][j]+m2[i][j];  
printf("%.1f ",m3[i][j]);  
}  
}                                                                              
printf("\n\n");  
  
}

//Code written by Tawanjot Singh ;')
