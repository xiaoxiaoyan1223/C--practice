//#include<iostream>
//#include<algorithm>
//int a[1000]={0};
//using namespace std;
//int shun(int p,a[],k)
//{
//		int count=0;
//	    p++;//当前报数的人的编号
//		if(p>n) p=1;
//		if(a[p]==0)
//		{
//			count++;
//			if(count==m)
//			{
//				a[p]=1;
//				s++;
//				cout<<p<<" ";
//				k=0;
//		 	} 	
//		}	
//}
//int ni(int p;a[],m)
//{
//		int count =0;
//		p--;//当前报数的人的编号
//		if(p>n) p=1;
//		if(a[p]==0)
//		{
//			count++;
//			if(count==m)
//			{
//				a[p]=1;
//				s++;
//				cout<<p<<" ";
//				k=0;
//		 	} 	
//		}	
//}
//int main()
//{
//	int n,m,p=0,k,s=0,sign=-1,count;
//	cin>>n>>m>>k;
//	while(s!=n) 
//	{
//	
//	}
//	return 0;
//} 



#include<iostream>
using namespace std;
int main()
{
    int n, m, k;    
	cin>>n>>m>>k;
    int pointer = 1, a[n + 1];
    int flag = -1;  
    for (int i = 0; i <= n; i++) 
	{
		a[i] = 1;
	}
 	a[0]=n;
    for (;a[0];flag *= -1)
    {
        int temp;  
        if (flag == -1) temp = m - 1;
        else temp = k - 1;
        while (temp)
        {
            pointer += flag;
            if (pointer < 1) pointer = n;  
            else if (pointer > n) pointer = 1;
            temp -= a[pointer];
        }
        cout<<pointer<<" ";
        a[0]--;
        a[pointer] = 0;
    }
    return 0;
}
