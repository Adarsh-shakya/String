#include<stdio.h>
void main()
{
char arr[100];
int i;
printf("Enter the string:");
gets(arr);
   for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='A' && arr[i]<='Z')
              arr[i]+=32;
        else if(arr[i]>='a' && arr[i]<='z')
              arr[i]-=32;
     }
printf("\nresult %s\n",arr);
}