#include<stdio.h>
#include<math.h>
int main()
{
int r,d,x,y,i,j;
printf("Enter Radius of circle:  ");
scanf("%d",&r);

d=2*r+1;    //+1 for including centre
char a[d][d];
x=r+1,y=r+1;    //+1 for including centre

for(i=1;i<=d;i++)
for(j=1;j<=d;j++)
a[i][j]='.';

float dist;

for(i=1;i<=d;i++){
for(j=1;j<=d;j++){

dist=sqrt(pow(x-i,2)+pow(y-j,2));
if(dist>=r-0.5 && dist<=r+0.5)    //dist needs to be approximately equal to r
a[i][j]='#';                                                                
}
}
printf("\n\n");
for(i=1;i<=d;i++){
for(j=1;j<=d;j++){
printf("%c ",a[i][j]);
}
printf("\n");
}
printf("\n\n");

return 0;
}
