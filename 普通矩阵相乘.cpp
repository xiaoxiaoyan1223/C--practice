#include<iostream>
using namespace std;
//int a[10][10],b[10][10],c[10][10];
int main()
{
	int a, b, c, d, sum = 0;
	int arry1[10][10], arry2[10][10], arry3[10][10];
	cin >> a >> b >> c >> d;
	if (b != c)
	{
		cout << "ninshuruc";
	}
	else
	{
		//����forѭ��������arry1
		for (int i = 0;i < a;i++)
		{
			for (int j = 0;j < b;j++)
			{
				cin >> arry1[i][j];
			}
		}
		//����forѭ��������arry2
		for (int i = 0;i < c;i++)
		{
			for (int j = 0;j < d;j++)
			{
				cin >> arry2[i][j];
			}
		}
		for (int i = 0;i < a;i++)
		{
			for (int j = 0;j < d;j++)
			{
				sum = 0;
				//ģ��������ˣ�i��������j����������һ��forѭ��k�Ǳ���i�к�j�������Ԫ�أ���֤��i�е�k��Ԫ��*j�е�k��Ԫ��
				for (int k = 0; k < b; k++)
					sum += arry1[i][k] * arry2[k][j];
				arry3[i][j] = sum;
			}

		}
		for (int i = 0;i < a;i++)
		{
			for (int j = 0;j < d;j++)
			{

				cout << arry3[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
