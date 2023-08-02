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
		 if(q[l]!=x) cout<<"������"<<endl;
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
//��ʼ����ָ��Ϊ������ʼλ�ã���ָ��Ϊ����ĩβλ�á�
//�����м�Ԫ�ص�������mid = (left + right) // 2��
//�Ƚ��м�Ԫ����Ŀ��ֵ��
//����м�Ԫ�ص���Ŀ��ֵ���򷵻ظ�Ԫ�ص�������
//����м�Ԫ�ش���Ŀ��ֵ������ָ���ƶ����м�Ԫ�ص���ࣨright = mid - 1����
//����м�Ԫ��С��Ŀ��ֵ������ָ���ƶ����м�Ԫ�ص��Ҳࣨleft = mid + 1����
//�ظ�����2�Ͳ���3��ֱ���ҵ�Ŀ��ֵ������ָ�������ָ�롣
//����ҵ�Ŀ��ֵ�����������������û���ҵ������ز����ڱ�ʾδ�ҵ���
//���ֲ��ҵ�ʱ�临�Ӷ�Ϊ O(logN)������ N ������ĳ��ȡ�
