#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%2==0&&n>4&&n<12)
	{
		printf("%d ",1);
	}
	else printf("%d ",0);
	if(n%2==0&&n>4||n<12)
	{
		printf("%d ",1);
	}
	else printf("%d ",0);
	if((n%2!=0&&n>4&&n<12)||(n%2==0&&(n<=4||n>=12))) 
	{
		printf("%d ",1);
	}
	else printf("%d ",0);
	if(n%2!=0&&n<=4&&n>=12)
	{
		printf("%d ",1);
	}
	else printf("%d ",0);
	return 0;
}

