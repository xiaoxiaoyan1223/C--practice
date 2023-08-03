#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
#include<unordered_map>
using namespace std;
typedef struct node{
    char num;
    struct node *next;
}Node;
typedef struct link{
    int date;
    struct link *cnext;
}NODE;
//���������ʼ�� 
Node *opInit()
{
    Node *p=(Node*)malloc(sizeof(Node));
    p->next=NULL;
    return p;
}
// �������������� 
NODE *numInit()
{
    NODE *p=(NODE*)malloc(sizeof(NODE));
    p->cnext=NULL;
    return p;
}

//һ������װ������,��һ��װ������
Node *op=opInit();
NODE *ndat=numInit();
//��ջ����ӣ�Ŀǰ�����������������Ҳ��char����
void head_push_op(char date)
{
    Node *a = (Node*)malloc(sizeof(Node));
    a->num=date;
    a->next=op->next;
    op->next=a;
}

void head_push_datt(int date) //�ڲ�����ջ�����
{
    NODE *a = (NODE*)malloc(sizeof(NODE));
    a->date=date;
    a->cnext=ndat->cnext;
    ndat->cnext=a;
}

void operate()
{
    int a=(ndat->cnext->date);
	ndat=ndat->cnext;
    int b=(ndat->cnext->date);
	ndat=ndat->cnext;
    char c=op->next->num;
	op=op->next;
    int d;
    if(c=='+') d=(b+a);
    else if(c=='-') d=b-a;
    else if(c=='*') d=b*a;
    else if(c=='/') d=b/a;
    head_push_datt(d);
}

int main()
{
//	�������ȼ� 
    unordered_map<char,int>mp{{'+',2},{'-',2},{'*',3},{'/',3},{'#',0},{'(',1}};
    string s;
    cin>>s;
    head_push_op(s[0]); 
    for(int i=1;s[i]!='#';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
        	//����ʮ��������������� 
            int x=s[i]-'0';
            int j=i+1;
            while(j<s.size()-2 && (s[j]>='0' && s[j]<='9'))
            {
                x=x*10+(s[j]-'0');
                j++;
            }
            head_push_datt(x);
            i=j-1;
        }
        //��Ϊ������ʱ �ò�������ջ 
        else if(s[i]=='(') head_push_op('(');
        //����ȡ��������ʱ����ʼ���������ڵ��� 
        else if(s[i]==')')
        {
            while(op->next->num!='(')
            {
                operate();
            }
            op=op->next;
        }
        else
        {
            if(mp[s[i]]>mp[op->next->num])
			{
				head_push_op(s[i]);
			}
            else
            {
                operate();
                head_push_op(s[i]);
            }
        }
    }
    while((op->next->num!='#') && (ndat->cnext->cnext)!=NULL)
    {
        operate();
    }
    cout<<(ndat->cnext->date)<<endl;
    return 0;
}

