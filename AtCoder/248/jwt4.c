#include<stdio.h>
#include <string.h>
int main()
{
	char s1[60],s2[60];
	gets(s1);
	gets(s2);
	int n1=strlen(s1),n2=strlen(s2);
	int i=0,j=0;
	while(i<n1||j<n2)
	{
		if(i>=n1)
		{
			printf("%c",s2[j++]);
			continue;
		}
		if(j>=n2)
		{
			printf("%c",s1[i++]);
			continue;
		}
		if(s1[i]<s2[j])
		{
			printf("%c",s1[i++]);
		}

		else if(s1[i]==s2[j])
		{
			j++;
			printf("%c",s1[i++]);
		}
		else
		{
			printf("%c",s2[j++]);
		}
	}
	return 0;
}