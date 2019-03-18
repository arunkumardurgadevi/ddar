#include<stdio.h>
#define MAX_SIZE 100000
void removeDuplicate(char*str);
void removeAll(char*str,const char toRemove,int index);
int main()
{
char str[MAX_SIZE];
gets(str);
removeDuplicate(str);
printf("%s\n",str);
return 0;
}
void removeDuplicate(char*str)
{
int i=0;
while(str[i]!=0)
{
removeAll(str,str[i],i+1);
i++;
}
}
void removeAll(char*str,const char toRemove,int index)
{
int i;
while(str[index]!='\0')
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
