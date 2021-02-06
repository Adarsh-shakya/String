#include<stdio.h>
void main()
{
char arr[50];
int i,j;
printf("Enter the word: ");
gets(arr);
for(i=0;arr[i]!='\0';i++)
{
         for(j=0;j<=i;j++)
           printf("%c",arr[j]);
printf("\n");
}
}

