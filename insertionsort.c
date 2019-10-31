//Program to implement Insertion sort

#include<stdio.h>
int main()
{
int n,i,a[25],j,temp;
printf("Enter length of array:  ");
scanf("%d",&n);
printf("Enter %d elements:  ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=1;i<n;i++)
{
j=i;
while(j>0 && a[j-1]>a[j])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;

j--;
}
}
printf("Sorted list in ascending order:  ");
for(i=0;i<n;i++)
printf("%d ",a[i]);                                                         

printf("\n\n");

return 0;
}

//Code written by Tawanjot Singh ;')
