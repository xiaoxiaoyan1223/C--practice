#include <iostream>
using namespace std;
const int N=100010;
int stk[N],t;
//����
stk[++t];
//����
t-- 
//�ж�ջ�Ƿ�Ϊ��
if(t>0) cout<<"����";
//ջ��
stk[t]; 

//***************����*********************** 
//�ڶ�β����Ԫ�� ����ͷ����Ԫ�� 
int q[N],start,end=-1;
//����
q[++end];
//����
start++;
//�ж϶��Ƿ�Ϊ��
if (start<=end) cout<<"��Ϊ��";
else empty;
//ȡ����ͷԪ��
q[start]; 
//**************ѭ������**********************
// hh ��ʾ��ͷ��tt��ʾ��β�ĺ�һ��λ��
int q[N], start = 0, end = 0;

// ���β����һ����
q[end ++ ] = x;
if (end == N) end= 0;

// �Ӷ�ͷ����һ����
start ++ ;
if (start== N) start = 0;

// ��ͷ��ֵ
q[start];

// �ж϶����Ƿ�Ϊ�գ����hh != tt�����ʾ��Ϊ��
if (start != end)
{
 
