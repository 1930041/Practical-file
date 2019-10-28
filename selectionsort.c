//Program to apply Selection sort

#include<stdio.h>
int main()
{
int n,i,j,a[25],temp,smaller;
printf("Enter length of array:  ");
scanf("%d",&n);
printf("Enter %d elements:  ",n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
smaller=i;
for(j=i+1;j<n;j++)    //To start looking for a smaller number from the next position
{
if(a[smaller]>a[j])
smaller=j;
}
if(smaller!=i)
{
temp=a[i];
a[i]=a[smaller];
a[smaller]=temp;
}
}
printf("Sorted elements in ascending order:  ");

for(i=0;i<n;i++)
printf("%d ",a[i]);

printf("\n");

return 0;
}

//Code written by Tawanjot Singh ;')
