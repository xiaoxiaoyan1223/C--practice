#include<iostream>
#include<algorithm>
int a[11]={0};
using namespace std;
typedef struct node
{
	int data;//�������� 
	struct node *next;//ָ���� 
}Node;
void ysflb(int n,int k)  //�ܹ���n���ˣ���������Ϊk���˳���
{
	//����ѭ���б�
	Node *head=NULL,*p=NULL,*r=NULL;
	head=(Node *)malloc(sizeof(Node));//���ڴ�����һƬ�ռ�
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
	 //ģ�ⱨ�� 
	 while(p->next!=p)
	 {
	 	for(int i=1;i<k;i++)
	 	{
	 		r=p;
	 		p=p->next;
		 }
		 cout<<p->data<<" ";
        //ɾ���������Ľڵ�   �뵱�ڰ�ɾ���ڵ�����½ڵ����� 
		 r->next=p->next;
		p=p->next;
	 }
	 //������һ���ڵ� 
	 cout<<p->data;
	 
 } 
int main()
{
	ysflb(10,3);
	return 0; 
 } 
