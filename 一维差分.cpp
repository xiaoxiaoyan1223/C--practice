#include<iostream>
using namespace std;
const int N = 100010;
int m,n;
int a[N],b[N];
void insert(int l, int r , int c)
{
    b[l] += c;
    b[r+1] -= c;
}

int main()
{
    scanf("%d%d",&n, &m);
    for(int i = 1; i <= n; i++)scanf("%d",&a[i]);
    //����ķ�ʽ�γ�b[i]
    for(int i = 1; i <= n; i++) insert(i, i, a[i]);
    
    while(m--)
    {
        int l, r ,c;
        scanf("%d%d%d",&l, &r, &c);
        insert(l, r, c);
        
    }
    for(int i = 1; i <= n; i++) b[i] += b[i - 1];
    for(int i = 1; i <= n; i++) printf("%d ", b[i]);
    return 0;
}
//6 3          //6�������������� 
//1 2 2 1 2 1 
//1 3 1       //[1,3]֮���1 
//3 5 1       //[3,5]֮���1 
//1 6 1
