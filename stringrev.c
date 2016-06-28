#include<stdio.h>
#include<string.h>
int main()
{
char str[30];
char *rev;
printf("Enter any string:");
scanf("%s",str);
rev=strrev(str);
printf("%s",rev);
return 0;
getch();
}
