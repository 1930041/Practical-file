//Program to implement Binary Search

#include<stdio.h>
int main()
{
int a[25],i,m,n,first=0,last,mid;

printf("Enter the length of array:  ");
scanf("%d",&m);
printf("Enter %d elements in ascending order:  ",m);
for(i=0;i<m;i++)
scanf("%d",&a[i]);

printf("Enter value to find:  ");
scanf("%d",&n);

last=n-1;     //To initialise to last index position
mid=(first+last)/2;
while(first<=last)
{
if(a[mid]<n)
first=mid+1;
else if(a[mid]==n)
{
printf("%d found at position #%d.\n",n,mid+1);    //mid+1 done to display location & not the index position 
break;
}
else
last=mid-1;
                                                                               
mid=(first+last)/2;                                                         
}

if(first>last)
printf("%d not found in the entered array!\n",n);     //Test expression turned false, which means desired element wasn't found

return 0;                                                                   
}

//Code written by Tawanjot Singh ;')
