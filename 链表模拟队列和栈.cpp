#include <iostream>
using namespace std;
const int N=100010;
int stk[N],t;
//插入
stk[++t];
//弹出
t-- 
//判断栈是否为空
if(t>0) cout<<"不空";
//栈顶
stk[t]; 

//***************队列*********************** 
//在队尾插入元素 ，队头弹出元素 
int q[N],start,end=-1;
//插入
q[++end];
//弹出
start++;
//判断队是否为空
if (start<=end) cout<<"不为空";
else empty;
//取出队头元素
q[start]; 
//**************循环队列**********************
// hh 表示队头，tt表示队尾的后一个位置
int q[N], start = 0, end = 0;

// 向队尾插入一个数
q[end ++ ] = x;
if (end == N) end= 0;

// 从队头弹出一个数
start ++ ;
if (start== N) start = 0;

// 队头的值
q[start];

// 判断队列是否为空，如果hh != tt，则表示不为空
if (start != end)
{
 
