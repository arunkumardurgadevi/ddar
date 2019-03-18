#include<stdio.h>
#include<string.h>
int main(void)
{
char str[1000],str1[1000];
int a,b;
scanf("%s",str);
scanf("%s",str1);
a=strlen(str);
b=strlen(str1);
if(a>b)
{
printf("\n%s",str);
}
else if(a==b)
{
printf("\n%s",str);
}
else
{
printf("\n%s",str1);
}
return 0;
}
