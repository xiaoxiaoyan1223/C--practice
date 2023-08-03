#include<iostream>
#include<string>
#include<stack>
#include <stdlib.h>
using namespace std;
string TETp(string& exp)
{
	stack<char> optr;
	string postexp;
	for (int i = 0; i < exp.size(); i++)
	{
		if ((exp[i] >= '0' && exp[i] <= '9') || exp[i] == '.')//������ֱ�ӽ��ַ���
		{
			postexp += exp[i];
			while ((exp[i+1] >= '0' && exp[i+1] <= '9') || exp[i+1] == '.')
				postexp+= exp[++i];
		    	postexp+= ' ';
		}
		else
		{
			if (exp[i] == '(')//�������Ž�ջ
				optr.push(exp[i]);
			else if (exp[i] == ')')//�������������ջ�������ų�ջ
			{
				while (!optr.empty())
				{
					if (optr.top() == '(')//�������������ջ���˳�
					{
						optr.pop();
						break;
					}
					else//������������������ӵ���׺���ʽ�в���ջ
					{
						postexp += optr.top();
						postexp += ' ';//�ָ�
						optr.pop();
					}
				}
			}
			else if (exp[i] == '*' || exp[i] == '/')
			{
				optr.push(exp[i]);
			}
			else if (exp[i] == '-' || exp[i] == '+')
			{
				while (!optr.empty()&&optr.top()!='(')//С�ڵ���ջ������������,���ջ*
				{
					postexp += optr.top();
					postexp += ' ';
					optr.pop();
				}
				//��ջ
				optr.push(exp[i]);
			}
			else//���ʽ����
			{
				perror("exp error!");
				exit(1);
			}
		}
	}
	//����������ʣ���������ջ
	while (!optr.empty())
	{
		postexp += optr.top();
		postexp += ' ';//�ָ�
		optr.pop();
	}
	return postexp;
}
double Compute(string p)
{
	stack<double> data;//����ջ
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] >= '0' && p[i] <= '9')//����������ջ
		{
			int left = i, right = i;
			while (p[right] != ' ')
				right++;
			double num = atof(p.substr(left,right).c_str());//�ַ���ת����
			//cout << num << endl;
			data.push(num);
			i = right;
		}
		else//����������
		{
			//ȡջ�������ݣ�ע���Ⱥ�˳�򣬺�һ�������������
			double right = data.top(); 
			data.pop();
			double left = data.top(); 
			data.pop();
			//�жϲ��������õ���������ջ
			char optr = p[i];
			switch (optr)
			{
			case '+':
				data.push(left + right);
				break;
			case '-':
				data.push(left - right);
				break;
			case '*':
				data.push(left * right);
				break;
			case '/':
				data.push(left / right);
				break;
			default:
				perror("optr error");
				break;
			}
			i++;
		}
	}
	return data.top();
}
int main()
{
	string str;
	while (cin >> str)
	{
		string p=TET(str) ;
		cout << Compute(p) << endl;
	}
	return 0;
}

