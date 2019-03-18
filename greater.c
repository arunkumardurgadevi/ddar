#include<stdio.h>
int main(void)
{
char str[1001],str1[1001];
int i;
gets(str);
gets(str1);
for(i=0;str[i]==str1[i] && str[i] =='\0';i++);
if(str>str1)
{
printf("%s",str);
}
else if(str==str1)
{
printf("%s",str);
}
else
{
printf("%s",str1);
}
return 0;
}
