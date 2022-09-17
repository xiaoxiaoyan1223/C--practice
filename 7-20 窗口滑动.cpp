#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,a[1000],max[1000],min[1000],temp[100],small=0,big=0,flag;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m=n-k+1;
	for(int i=0;i<m;i++)
	{
		flag=i;
		for(int j=0;j<k;j++)
		{
			temp[j]=a[flag++];
		}
		sort(temp,temp+k);
		max[big++]=temp[k-1];
		min[small++]=temp[0];
	}
	for(int i=0;i<m;i++)
	{
		cout<<min[i]<<" ";	
	}
	cout<<"\n";
	for(int i=0;i<m;i++)
	{
		cout<<max[i]<<" ";
	}
	return 0;
}
