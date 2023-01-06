#include<iostream>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
typedef int vertextype;		//顶点类型
typedef int edgetype;		//边上的权值类型
#define max 100			//最大顶点数

typedef struct edgenode		//边表结点
{
	int adjvex;		//邻接点域，存放该顶点对应的下标
	edgetype weight;//权值
	edgenode * next;//链域，指向下一个邻接点
}edgenode;
typedef struct vexnode		//顶点表结点
{
	vertextype data;	//顶点域，存放顶点信息
	edgenode * firstnode;//边表头指针
}vexnode;


typedef struct grapharrlist	
{
	vexnode arrlist[max];	//一维数组存放顶点
	int numvertexes, numedges;//顶点个数，边的个数
}grapharrlist;

void createarrgarph(grapharrlist * G)
{
	cout << "请输入顶点和边的个数" << endl;
	cin >> G->numvertexes >> G->numedges;
	
	//cout<< G->numvertexes << G->numedges;
	cout << "输入顶点信息,建立顶点表" << endl;
	for (int k=0; k < G->numvertexes; k++)		//建立顶点表
	{
//		cout << "输入顶点信息,建立顶点表" << endl;
		cin >> G->arrlist[k].data;		//输入顶点信息
		G->arrlist[k].firstnode=NULL;	//并将边表置为空
	}
	edgenode *e;
	
	for (int k = 0; k < G->numedges; k++)//建立边表
	{
		cout << "输入边上的顶点序号i,j" << endl;
		int i,j;
		cin >> i >> j;
		
		e = new edgenode;		//建立一个新节点
		e->adjvex = j;			//邻域序号为j
		e->next = G->arrlist[i].firstnode;	//头插法，将e指针指向当前顶点指向的结点
		G->arrlist[i].firstnode = e;		//当前结点的指针指向e
		//free(e);
		
	    //无向图，一条边两个顶点，需要对i,j分别插入
		e = new edgenode;//建立一个新节点
		e->adjvex = i;	//邻域序号为i
		e->next = G->arrlist[j].firstnode;//头插法，将e指针指向当前顶点指向的结点
		G->arrlist[j].firstnode = e;//当前结点的指针指向e

	}
}

bool visited[max];	//访问标志的数组

void DFS(grapharrlist G, int i)		//深度优先递归算法，调用一次，遍历输出一个连通图
{
	edgenode *p;
	visited[i] = 1;
	cout << G.arrlist[i].data<< " ";	//打印顶点

	p = G.arrlist[i].firstnode;
	while (p)
	{
		if (!visited[p->adjvex])
			DFS(G, p->adjvex);		//对访问的邻接节点递归调用
		p = p->next;
	}
}
/**************深度遍历操作******************/
void DFStraverse(grapharrlist G)	
{
	for (int i = 0; i < G.numvertexes; i++)
		visited[i] = 0;			//初始化标志数组，顶点全为未访问
	for (int i = 0; i < G.numvertexes; i++)
		if (!visited[i])		//对未访问过的顶点递归调用。若是连通图，则调用一次
			DFS(G, i);		
}
/**************广度遍历操作******************/
bool visited1[max];	//标记数
void BFStraverse(grapharrlist G)//广度遍历算法
{
	edgenode *p;
	queue<vertextype> q;//队列
	for (int i = 0; i < G.numvertexes; i++)	//初始化标记数组
		visited1[i] = 0;
	for (int i = 0; i < G.numvertexes; i++)	//对每一个顶点做循环
	{
		if (!visited1[i])		//如果顶点未访问就处理
		{
			visited1[i] = 1;
			cout << G.arrlist[i].data <<' ';
			q.push(i);		//将顶点入队
		
			while (!q.empty())
			{
				int t=q.front();
				q.pop();
				p = G.arrlist[t].firstnode;		//找到当前顶点的边表头指针
				while (p)
				{
					if (!visited1[p->adjvex])	//如果顶点未访问就处理
					{
						visited1[p->adjvex] = 1;
						cout<<p->adjvex<<' ';
						//cout << G.arrlist[p->adjvex].data <<endl;
						q.push(p->adjvex);
					}
					p = p->next;		//指针指向下一个邻接点
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


