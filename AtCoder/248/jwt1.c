#include <stdio.h>
#include <string.h>
#define N 7
int main()
{
	char weekday[][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char s[50];
	int i;
	scanf("%s",s);
	for(i=0;i<N;i++)
	{
		if(!strcmp(weekday[i],s))
		{
			printf("%s is %d\n",s,i);
			break;
		}
	}
	if(i==N)
	{
		printf("Not found!\n");
	}
	return 0;
}