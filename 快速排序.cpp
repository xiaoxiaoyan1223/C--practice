#include <iostream>
using namespace std;
const int N=1e6 + 10;
int n;
int q[N];
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j), quick_sort(q, j + 1, r);
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&q[i]);
	quick_sort(q,0,n-1);
	for(int i=0;i<n;i++) printf("%d ",q[i]);
	return 0;
}
//1、选择一个基准元素q[l]，一般可以选择待排序序列的第一个元素。
//2、将序列分割成两个子序列，小于等于基准元素的放在左边，大于基准元素的放在右边。
//3、对左右两个子序列递归地进行快速排序。
//4、合并左右两个子序列和基准元素，得到最终有序序列。
//快速排序的平均时间复杂度为O(nlogn)，


