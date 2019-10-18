#### Program to calculate length of string using strlen() function

#include<stdio.h>
#include<string.h>

void main()
{
char str[20];
int len;
printf("\nEnter a string of length <= 19");

gets(str);
len=strlen(str);

printf("Number of characters in %s = %d\n",str,len);
}

*Code written by Tawanjot Singh ;')*