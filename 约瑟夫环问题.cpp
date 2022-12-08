	#include<iostream>
#include<algorithm>
int a[11]={0};
using namespace std;
int main()
{
	int n,m,p=0,k=0,s=0;
	cin>>n>>m;
	while(s!=n) 
	{
		p++;//当前报数的人的编号
		if(p>n) p=1;
		if(a[p]==0)
		{
			k++;
			if(k==m)
			{
				a[p]=1;
				s++;
				cout<<p<<" ";
				k=0;
		 	} 	
		}	
		
	}
	return 0;
} 
