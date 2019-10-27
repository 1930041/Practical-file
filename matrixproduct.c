//Program to display resultant matrix after Product of 2 entered matrices, if they can be multiplied

#include<stdio.h>  
void main()  
{  
int m,n,p,q,i,j,k,sum=0;  
int one[10][10],two[10][10],product[10][10];  
printf("Enter size of first matrix:  ");  
scanf("%d%d",&m,&n);  
  
printf("Enter size of second matrix:  ");  
scanf("%d%d",&p,&q);  
  
if(n!=p)  
printf("The matrices cannot be multiplied with each other!\n");               
else  
{  
printf("Enter elements of first matrix\n\n");  
for(i=0;i<m;i++)  
for(j=0;j<n;j++)  
scanf("%d",&one[i][j]);  
  
printf("Enter elements of second matrix\n\n");  
for(i=0;i<m;i++)  
for(j=0;j<n;j++)                                                               
scanf("%d",&two[i][j]);  
  
for(i=0;i<m;i++){  
for(j=0;j<n;j++){  
for(k=0;k<p;k++){                                                             
sum+=one[i][k]*two[k][j];    //Calculating 1 resultant element
}  
product[i][j]=sum;  
sum=0;    //Resetting sum to 0 for next resultant element  
}                                                                             
}  
printf("Product of the matrices\n\n");  
  
for(i=0;i<m;i++)  
{                                                                             
printf("\n");  
for(j=0;j<n;j++)  
printf("%d ",product[i][j]);  
}

//Code written by Tawanjot Singh ;')
