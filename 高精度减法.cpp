#include <iostream>
#include <vector>
using namespace std;
//�ж��Ƿ�A>=B
bool cmp(vector<int> &A,vector<int> &B)
{
	if(A.size()!=B.size()) return A.size()>B.size();
	for(int i=A.size()-1;i>=0;i--)
	{
		if(A[i]!=B[i])
		{
			return A[i]>B[i];
		}
	}
	return true;
 } 
// C = A - B, ����A >= B, A >= 0, B >= 0
vector<int> sub(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    for (int i = 0, t = 0; i < A.size(); i ++ )
    {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
    }
//ȥ��ǰ��0 
    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}
int main()
{
	string a,b;
	vector<int> A,B;
	cin>>a>>b;//a="123456"
	for(int i=a.size()-1;i>=0;i-- ) A.push_back(a[i]-'0');//A=[6,5,4,3,2,1]
	for(int i=a.size()-1;i>=0;i-- ) B.push_back(b[i]-'0');
	if(cmp(A,B))
	{
		auto c=sub(A,B);
		for(int i=C.size()-1;i>=0;i--) printf("%d",C[i]);
	}
	else 
	{
		auto c=sub(B,A);
		for(int i=C.size()-1;i>=0;i--) printf("%d",C[i]);
	}
	return 0;
}
