#include<stdio.h>
#include<string.h>
void main()
{
char arr[100];
char vol[]={'A','a','E','e','I','i','O','o','U','u','\0'};
int i,j,v=0,c=0;
printf("\nenter the string: ");
gets(arr);
for(i=0;arr[i]!='\0';i++)
{
    for(j=0;j<10;j++)
        if(arr[i]==vol[j])
            v++;
if(arr[i]==' ')
    c++;
}
printf("\nVowels= %d\n",v);
printf("consonants=%d",strlen(arr)-(v+c));
}