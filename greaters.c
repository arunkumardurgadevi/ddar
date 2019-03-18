#include<stdio.h>
int main(void)
{
char str[50],str1[50];
int i;
gets(str);
gets(str1);
for(i=0;str[i]==str1[i] && str[i]=='\0';i++);
if(str>str1);
{
puts(str);
}
else if(str==str1)
{
puts(str);
}
else
{
puts(str1);
}
}
