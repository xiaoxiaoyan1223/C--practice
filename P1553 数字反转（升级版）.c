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
		//记录前面部分的长度 
		if(s[i]>'0'&&s[i]<'9') count++;
		else
		{
			//记录符号 
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
	//判断符号 
	if(sign=='0')//说明是整数
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
		//如果是其他情况的话就继续输出 
		printf("%c",sign); 
	}
	int m=strlen(s)-1;
	
	//分别除去前面和后面的0 
	while(s[x+1]=='0'&&x<m-1) x++;
	while(s[m]=='0'&&m>x+1) m--;
	for(i=m;i>x;i--)
	{
		printf("%c",s[i]);
	}
	return 0;	 
} 
