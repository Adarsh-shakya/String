#include<stdio.h>
void main()
{
char arr[100];
int i,alp_count=0,dig_count=0,sp_chr=0;
printf("Enter the string:");
gets(arr);
for(i=0;arr[i]!='\0';i++)
   {
     if(arr[i]>='A' && arr[i]<='Z' || arr[i]>='a' && arr[i]<='z')
          alp_count++;
     else if(arr[i]>=48 && arr[i]<=57)
             dig_count++;
    else
           sp_chr++;
    }
printf("\nAlphabets = %d\n",alp_count);
printf("Digits         = %d",dig_count);
printf("\nSpecial char = %d",sp_chr);
}