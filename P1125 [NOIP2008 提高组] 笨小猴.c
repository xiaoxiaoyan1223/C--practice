#include<stdio.h>
#include<math.h> 
#include<string.h>
int isPrime(int x)
{
	int i;
	if(x<=1) return 0;
	for(i=2;i<sqrt(x);i++)
	{
		if(x%2==0) return 0;
	}
	return 1;
}
int main()
{
	char word[100];
	int a[24]={0},minn=999,maxn=-999,i,j,k,dis;
	scanf("%s",word);
	for(i=0;i<strlen(word);i++)
	{
		a[word[i]-'a']++;
	}
	for(i=0;i<24;i++){
		if(a[i]>maxn){
			maxn=a[i];
		}
		if(a[i]<minn&&a[i]!=0){
			minn=a[i];
		}
	}
	dis=maxn-minn;
	if(isPrime(dis))
	{
		printf("Lucky Word\n");
		printf("%d",dis);
	}
	else
	{
		printf("No Answe\n");
		printf("%d",dis);
	}
	
}
