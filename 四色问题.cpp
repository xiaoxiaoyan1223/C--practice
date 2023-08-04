#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,s[101][101],a[101],len=0;

void input()
{
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++)
      scanf("%d",&s[i][j]);
}

bool repeat(int x,int c)//判断当前的颜色是否与相邻的冲突
{
	for(int j=1;j<=x-1;j++)//判断已输入过的省市
	 if(s[x][j]==1)
	  if(c==a[j]) return false;
	return true;
}

void lil(int dep)
{
	if(dep>n)//当深度超过n就输出
	{
	    for(int i=1;i<=n;i++)
	     printf("%d ",a[i]);
	    printf("\n");
	    len++; return;//累加总数
	}
	for(int i=1;i<=4;i++)
    {
		a[dep]=i;
		if(repeat(dep,i)) lil(dep+1);
		//如果不冲突继续枚举
		a[dep]=0;
	}
}

int main()
{
	input();
	a[1]=1;
	lil(2);
	printf("%d",len);
	return 0;
}

