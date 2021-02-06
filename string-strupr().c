#include<stdio.h>
#include<string.h>
void  main()
{
char  arr[100];
printf("enter the string: ");
gets(arr);
strupr(arr);
printf("\nstring in lower case %s\n",arr);
}