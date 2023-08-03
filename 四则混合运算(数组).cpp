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
		if ((exp[i] >= '0' && exp[i] <= '9') || exp[i] == '.')//是数字直接进字符串
		{
			postexp += exp[i];
			while ((exp[i+1] >= '0' && exp[i+1] <= '9') || exp[i+1] == '.')
				postexp+= exp[++i];
		    	postexp+= ' ';
		}
		else
		{
			if (exp[i] == '(')//是左括号进栈
				optr.push(exp[i]);
			else if (exp[i] == ')')//遇到右括号则出栈到左括号出栈
			{
				while (!optr.empty())
				{
					if (optr.top() == '(')//遇到左括号则出栈并退出
					{
						optr.pop();
						break;
					}
					else//遇到其他操作符则添加到后缀表达式中并出栈
					{
						postexp += optr.top();
						postexp += ' ';//分隔
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
				while (!optr.empty()&&optr.top()!='(')//小于等于栈顶操作符数据,则出栈*
				{
					postexp += optr.top();
					postexp += ' ';
					optr.pop();
				}
				//进栈
				optr.push(exp[i]);
			}
			else//表达式错误
			{
				perror("exp error!");
				exit(1);
			}
		}
	}
	//遍历结束，剩余操作符出栈
	while (!optr.empty())
	{
		postexp += optr.top();
		postexp += ' ';//分隔
		optr.pop();
	}
	return postexp;
}
double Compute(string p)
{
	stack<double> data;//数据栈
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] >= '0' && p[i] <= '9')//是数字则入栈
		{
			int left = i, right = i;
			while (p[right] != ' ')
				right++;
			double num = atof(p.substr(left,right).c_str());//字符串转浮点
			//cout << num << endl;
			data.push(num);
			i = right;
		}
		else//遇到操作符
		{
			//取栈顶两数据，注意先后顺序，后一个才是左操作数
			double right = data.top(); 
			data.pop();
			double left = data.top(); 
			data.pop();
			//判断操作符，得到数据再入栈
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

