#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	int left=0,right=0;
	int n1=strlen(s1),n2=strlen(s2);
	while(right<n1)
	{
		int id=right-left;
		if(s2[id]!=s1[right])
		{
			while(left<=right&&s1[left]!=s2[0])
			{
				printf("%c",s1[left]);
				left++;
			}
			right++;
			continue;
		}
		if(id==n2-1)
		{
			right++;
			left=right;
			continue;
		}
		right++;
	}
	return 0;
}