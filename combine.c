#include<stdio.h>
int main(void)
{
char str1[1000],str2[1000],i,j;
scanf("%s",str1);
scanf("%s",str2);
for(i=0;str1[i]!='\0';++i);
for(j=0;str2[j]='\0';++j,++i)
{
str1[i]=str2[j];
}
str1[i]='\0';
printf("\n%s",str1);
return 0;
}
