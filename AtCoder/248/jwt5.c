#include<stdio.h>
#include<string.h>
int main()
{
	char s[110];
	gets(s);
	int n=strlen(s);
	int left=0,right=0;
	while(right<n)
	{
		if(s[right]!=' ')
		{
			s[left++]=s[right];
		}
		right++;
	}
	s[left]=0;
	puts(s);
	return 0;
}