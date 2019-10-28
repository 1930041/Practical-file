//Program to calculate the sum of elements of a matrix both row-wise & column-wise, & display as per the format

#include<stdio.h>
int main()
{
int i,j,a[25][25],m,n,rsum=0,csum=0;

printf("Enter RowsxColumns of matrix:  ");
scanf("%dx%d",&m,&n);
printf("Enter elements of array row-wise:\n");

for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)    //Column to change more frequently as compared to Row
{
printf("%d    ",a[i][j]);
rsum+=a[i][j];
}
printf("|  %d\n",rsum);
rsum=0;     //To calculate sum of elements of next row
}
for(i=0;i<m;i++)
for(j=0;j<n;j++)
printf("__");

printf("\n\n");
for(j=0;j<n;j++)
{
for(i=0;i<m;i++)      //Row to change more frequently as compared to Column
{
csum+=a[i][j];
}
printf("%d   ",csum);
csum=0;     //To calculate sum of elements of next column
}                                                                           
printf("\n\n");

return 0;
}

//Code written by Tawanjot Singh ;')
