#include <iostream>
using namespace std;
const int N=1e6+10;
int n,m;
int q[N];
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	while(m--)
	{
		int x;
		scanf("%d",&x);
		int l=0,r=n-1;
		while(l<r)
		{
			int mid=(l+r)/2;
			if(q[mid]>=x) r=mid;
			else l=mid+1;
		 } 
		 if(q[l]!=x) cout<<"不存在"<<endl;
		 else
		 {
		 	cout<<l<<' ';
		 	int l=0,r=n-1;
		 	while(l<r)
		 	{
		 		int mid=(l+r+1)/2;
		 		if(q[mid]<=x) l=mid;
		 		else r=mid-1;
		 		
			 }
			 cout<<l<<endl;
		 }
	}
	return 0;
}
//初始化左指针为数组起始位置，右指针为数组末尾位置。
//计算中间元素的索引：mid = (left + right) // 2。
//比较中间元素与目标值：
//如果中间元素等于目标值，则返回该元素的索引。
//如果中间元素大于目标值，则将右指针移动到中间元素的左侧（right = mid - 1）。
//如果中间元素小于目标值，则将左指针移动到中间元素的右侧（left = mid + 1）。
//重复步骤2和步骤3，直到找到目标值或者左指针大于右指针。
//如果找到目标值，返回其索引；如果没有找到，返回不存在表示未找到。
//二分查找的时间复杂度为 O(logN)，其中 N 是数组的长度。
