//Program to display the product of two fractions using Structure

#include<stdio.h>

struct frac
{
float num;
float denom;
};

int main()
{
struct frac f1,f2,res;

printf("Enter numerator,denominator of 1st fraction:  ");
scanf("%f/%f",&f1.num,&f1.denom);
printf("Enter numerator,denominator of 2nd fraction:  ");
scanf("%f/%f",&f2.num,&f2.denom);

res.num=f1.num*f2.num;
res.denom=f1.denom*f2.denom;

printf("The resultant product fraction is %.2f/%.2f.\n",res.num,res.denom);

return 0;
}

//Code written by Tawanjot Singh ;')
