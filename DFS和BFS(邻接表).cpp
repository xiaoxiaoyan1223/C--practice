#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
typedef int vertextype;		//��������
typedef int edgetype;		//���ϵ�Ȩֵ����
#define max 100			//��󶥵���

typedef struct edgenode		//�߱���
{
	int adjvex;		//�ڽӵ��򣬴�Ÿö����Ӧ���±�
	edgetype weight;//Ȩֵ
	edgenode * next;//����ָ����һ���ڽӵ�
}edgenode;
typedef struct vexnode		//�������
{
	vertextype data;	//�����򣬴�Ŷ�����Ϣ
	edgenode * firstnode;//�߱�ͷָ��
}vexnode;


typedef struct grapharrlist	
{
	vexnode arrlist[max];	//һά�����Ŷ���
	int numvertexes, numedges;//����������ߵĸ���
}grapharrlist;

void createarrgarph(grapharrlist * G)
{
	cout << "�����붥��ͱߵĸ���" << endl;
	cin >> G->numvertexes >> G->numedges;
	
	//cout<< G->numvertexes << G->numedges;
	cout << "���붥����Ϣ,���������" << endl;
	for (int k=0; k < G->numvertexes; k++)		//���������
	{
//		cout << "���붥����Ϣ,���������" << endl;
		cin >> G->arrlist[k].data;		//���붥����Ϣ
		G->arrlist[k].firstnode=NULL;	//�����߱���Ϊ��
	}
	edgenode *e;
	
	for (int k = 0; k < G->numedges; k++)//�����߱�
	{
		cout << "������ϵĶ������i,j" << endl;
		int i,j;
		cin >> i >> j;
		
		e = new edgenode;		//����һ���½ڵ�
		e->adjvex = j;			//�������Ϊj
		e->next = G->arrlist[i].firstnode;	//ͷ�巨����eָ��ָ��ǰ����ָ��Ľ��
		G->arrlist[i].firstnode = e;		//��ǰ����ָ��ָ��e
		//free(e);
		
	    //����ͼ��һ�����������㣬��Ҫ��i,j�ֱ����
		e = new edgenode;//����һ���½ڵ�
		e->adjvex = i;	//�������Ϊi
		e->next = G->arrlist[j].firstnode;//ͷ�巨����eָ��ָ��ǰ����ָ��Ľ��
		G->arrlist[j].firstnode = e;//��ǰ����ָ��ָ��e

	}
}

bool visited[max];	//���ʱ�־������

void DFS(grapharrlist G, int i)		//������ȵݹ��㷨������һ�Σ��������һ����ͨͼ
{
	edgenode *p;
	visited[i] = 1;
	cout << G.arrlist[i].data<< " ";	//��ӡ����

	p = G.arrlist[i].firstnode;
	while (p)
	{
		if (!visited[p->adjvex])
			DFS(G, p->adjvex);		//�Է��ʵ��ڽӽڵ�ݹ����
		p = p->next;
	}
}
/**************��ȱ�������******************/
void DFStraverse(grapharrlist G)	
{
	for (int i = 0; i < G.numvertexes; i++)
		visited[i] = 0;			//��ʼ����־���飬����ȫΪδ����
	for (int i = 0; i < G.numvertexes; i++)
		if (!visited[i])		//��δ���ʹ��Ķ���ݹ���á�������ͨͼ�������һ��
			DFS(G, i);		
}
/**************��ȱ�������******************/
bool visited1[max];	//�����
void BFStraverse(grapharrlist G)//��ȱ����㷨
{
	edgenode *p;
	queue<vertextype> q;//����
	for (int i = 0; i < G.numvertexes; i++)	//��ʼ���������
		visited1[i] = 0;
	for (int i = 0; i < G.numvertexes; i++)	//��ÿһ��������ѭ��
	{
		if (!visited1[i])		//�������δ���ʾʹ���
		{
			visited1[i] = 1;
			cout << G.arrlist[i].data <<' ';
			q.push(i);		//���������
		
			while (!q.empty())
			{
				int t=q.front();
				q.pop();
				p = G.arrlist[t].firstnode;		//�ҵ���ǰ����ı߱�ͷָ��
				while (p)
				{
					if (!visited1[p->adjvex])	//�������δ���ʾʹ���
					{
						visited1[p->adjvex] = 1;
						cout<<p->adjvex<<' ';
						//cout << G.arrlist[p->adjvex].data <<endl;
						q.push(p->adjvex);
					}
					p = p->next;		//ָ��ָ����һ���ڽӵ�
				}
			}
		}
	}
}
int main()
{
	grapharrlist g;
	createarrgarph(&g);
	BFStraverse(g);
	system("pause");
	return 0;
}


