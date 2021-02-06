#include<stdio.h>
void main()
{
char arr[150];
int s=0,i;
printf("enter the string: ");
gets(arr);
for(i=0;arr[i]!='\0';i++)
    if(arr[i]==' ')
       s++;
printf("number of words are %d",s+1);
}