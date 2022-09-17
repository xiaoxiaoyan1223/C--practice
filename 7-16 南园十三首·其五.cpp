#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,p,temp=0,a[10000],flag;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		//²Ù×÷Ò» 
		if(p==1)
		{
			cin>>a[temp]; 
		}
		if(p==2)
		{
			if(temp!=0&&temp!=1)
			{
			for(int i=0;i<temp;i++)
			{
				a[i]=a[i+1];
			}
			temp--;
			}
			else if(temp=1)
			{
				a[1000]={};
				temp=0;
			}
		}
		if(p==3)
		{
			for(int j=0;j<temp/2;j++)
			{
				flag=a[j];
				a[j]=a[temp-j];
				a[temp-i]=flag;
			}
		}
		temp++; 
		if(i==n-1)
		{
			if(temp==1)
			{
				cout<<0;
			}
			else if(temp==0)
			{
				cout<<-1;
			}
			else cout<<1;
		}
		else
		{
			if(temp==1)
			{
				cout<<0<<"\n";
			}
			else if(temp==0)
			{
				cout<<-1<<"\n";
			}
			else cout<<1<<"\n";
		}
	}
	return 0;
}
