#include<iostream>
using namespace std;

const int N =1010;

int a[N][N],b[N][N];
int n, m ,q;

void insert(int x1, int y1, int x2, int y2, int c)
{
    b[x1][y1] += c;
    b[x2 + 1][y1] -= c;
    b[x1][y2 +1] -= c;
    b[x2 +1][y2+1] +=c;
}


int main()
{
    scanf("%d%d%d", &n, &m, &q);
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
            
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            insert(i, j, i, j, a[i][j]);
            
    while( q-- )
    {
        int x1, x2, y1, y2, c;
        cin >> x1 >> y1>> x2 >> y2 >> c;
        insert(x1,y1, x2, y2, c);
    }
    
    //��ǰ׺��
    
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<= m; j++)
        b[i][j] += b[i-1][j] +b[i][j-1] -b[i-1][j-1];
        
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<= m; j++)
        printf("%d ", b[i][j]);
        puts("");
    }
    return 0;
}
//����һ�� n �� m �е��������������� q ��������ÿ����������������� x1,y1,x2,y2,c������ (x1,y1) �� (x2,y2)��ʾһ���Ӿ�������Ͻ���������½����ꡣ 
//3 4 3
//1 2 2 1
//3 2 2 1
//1 1 1 1
//1 1 2 2 1
//1 3 2 3 2
//3 1 3 4 1

