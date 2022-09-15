#include<iostream>
using namespace std;
struct People
	{
		int num;
		char name[100];
		int score;
	};
int main()
{
	int n,s=0,temp=0,k=0,m,p=-1;
	struct People a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d,%[^,],%d",&a[i].num,&a[i].name,&a[i].score);
		printf("%d\n",a[i].num);
	}
	scanf("%d",&m);
	while(s!=n)
	{
		p++;
		if(p>n-1) p=0;
		if(a[p].num!=0)
		{
			k++;
			if(k==m)
			{
				s++;
				printf("%d,%s,%d\n",a[p].num,a[p].name,a[p].score);
				k=0;
				m=a[p].score;
				a[p].num=0;
		 	} 	
		}	
	}
	return 0;
}
