**Program** to copy second string to first string using strcpy() function

#include<stdio.h>
#include<string.h>

void main()
{
char str1[30]="Wel",str2[30]="come";
printf("\nFirst string is %s\n,str1);
printf("\nSecond string is %s\n",str2);

strcpy(str1,str2);

printf("First string after copying from second one:  %s\n",str1);
}

Code written by Tawanjot Singh ;')