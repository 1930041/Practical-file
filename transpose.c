//Program to display the Transpose of an entered matrix

#include<stdio.h>  
void main()  
{  
int a[10][10],b[10][10];  
int n,m,i,j;  
printf("Enter size of Matrix A as m,n:  ");  
scanf("%d%d",&m,&n);  
printf("\nEnter  elements of Matrix A row wise\n");  
  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
scanf("%d",&a[i][j]);  
}  
  
for(i=0;i<m;i++)  
{  
for(j=0;j<n;j++)  
b[j][i]=a[i][j];    //Switching rows & columns of 'a' matrix to columns & rows of 'b' matrix respectively
}  
printf("\nTranspose is\n\n");  
for(i=0;i<n;i++)  
{  
printf("\n");  
for(j=0;j<m;j++)  
printf("%d ",b[i][j]);  
}  
printf("\n\n");  
}

//Code written by Tawanjot Singh ;')
