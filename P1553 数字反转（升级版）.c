#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	char sign='0';
	int count=0,i;
	
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		//��¼ǰ�沿�ֵĳ��� 
		if(s[i]>'0'&&s[i]<'9') count++;
		else
		{
			//��¼���� 
			sign=s[i];
			break;
		} 
	}
	int x=count;
	count--;
	while(s[count]=='0'&&s[count]>0) count--;
	for(i=count;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	//�жϷ��� 
	if(sign=='0')//˵��������
	{
		return 0;
	} 
	else if(sign=='%')
		{
			printf("%c",sign);
			return 0; 
		}
	else 
	{
		//�������������Ļ��ͼ������ 
		printf("%c",sign); 
	}
	int m=strlen(s)-1;
	
	//�ֱ��ȥǰ��ͺ����0 
	while(s[x+1]=='0'&&x<m-1) x++;
	while(s[m]=='0'&&m>x+1) m--;
	for(i=m;i>x;i--)
	{
		printf("%c",s[i]);
	}
	return 0;	 
} 
