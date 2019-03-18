#include<stdio.h>
#define MAX_SIZE 100
void removeDuplicate(char*str);
void removeAll(char*str,const char toRemove,int index);
int main()
{
char str[MAX-SIZE];
gets(str);
removeDuplicate(str);
printf("%s\n",str);
return 0;
}
void removeAll(char*str,const char toRemove,int index)
{
int i;
while(str[index]!='\0')
{
if(str[index]!='\0')
{
if(str[index]==toRemove)
{
i=index;
while(str[i]!='\0')
{
str[i]=str[i+1];
i++;
}
}
else
{
index++;
}
}
}
