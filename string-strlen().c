#include<stdio.h>
#include<string.h>
void main()
{
char arr[50];
int n;
printf("Enter the string: ");
gets(arr);
n=strlen(arr);
printf("\nlength of string %d\n",n);
}