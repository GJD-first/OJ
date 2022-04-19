#include<stdio.h>
#include <string.h>
#define bool int
#define false 0
#define true 1
int main()
{
	bool tag[130];
	char s1[60],s2[60];
	memset(tag,false,sizeof(tag));
	gets(s1);
	getchar();
	gets(s2);
	for(int i=0;s1[i];i++)
	{
		tag[s1[i]]=true;
	}
	for(int i=0;s2[i];i++)
	{
		tag[s2[i]]=true;
	}
	for(int i=0;i<130;i++)
	{
		if(tag[i])
		{
			printf("%c",i);
		}
	}
	return 0;
}