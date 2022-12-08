#include<iostream>
#include<algorithm>
int a[11]={0};
using namespace std;
typedef struct node
{
	int data;//数据类型 
	struct node *next;//指针域 
}Node;
void ysflb(int n,int k)  //总共有n个人，报到数据为k的人出局
{
	//创建循环列表
	Node *head=NULL,*p=NULL,*r=NULL;
	head=(Node *)malloc(sizeof(Node));//向内存申请一片空间
	if(head==NULL)
	{
		cout<<"Memory Faild";
		return;
	 } 
	 head->data=1;
	 head->next=NULL;
	 p=head;
	 for(int i=2;i<=n;i++)
	 {
	 	r=(Node *)malloc(sizeof(Node));
	 	r->data=i;
	 	r->next=NULL;
	 	p->next=r;
	 	p=r;
	 }
	 p->next=head;
	 p=head;
	 //模拟报数 
	 while(p->next!=p)
	 {
	 	for(int i=1;i<k;i++)
	 	{
	 		r=p;
	 		p=p->next;
		 }
		 cout<<p->data<<" ";
        //删除报到数的节点   想当于把删除节点的上下节点连接 
		 r->next=p->next;
		p=p->next;
	 }
	 //输出最后一个节点 
	 cout<<p->data;
	 
 } 
int main()
{
	ysflb(10,3);
	return 0; 
 } 
