#include<iostream>
#include<stack>
using namespace std;
int option_sort(int a[],int temp)
{
	int temp2,count;
	for(int i=0;i<temp-1;i++)
 	{
 	count=i;
 	for(int j=count+1;j<temp;j++)
 	{
 		//每次循环找出未排序部分 最小值 
 		if(a[i]>a[j])
 		{
 			temp2=a[i];
 			a[i]=a[j];
 			a[j]=temp2;
		 }
	 }
  } 
}
int main()
{
	int n,m,i=0,a[100],b[100];
	while(cin>>n)
	{
		if(n!=-1)
		{
			a[i]=n;
			i++;
		}
		else break;
		
	}
//	cout<<i;
//	cout<<endl;
	while(cin>>m)
	{
		if(m!=-1)
		{
			a[i]=m;
			i++;
		}
		else break;	
	}
//	cout<<i<<endl;
//	for(int j=0;j<i;j++)
//	{
//		cout<<a[j]<<" "<<endl;
//	}
	if(i==0)
	{
		cout<<"NULL";
	}
	else
	{
		option_sort(a,i-2);
		cout<<a[0];
		for(int j=1;j<i;j++)
		{
			cout<<" "<<a[j];
		} 
	}
	
	return 0;
	
}
