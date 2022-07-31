#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,k,j;
	int a,b;
	char s[100];
	char str[10],temp[10];
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		//拼接字符串 
		if(k==1)
		{
			scanf("%s",str);
			strcat(s,str);
			printf("%s\n",s);
		}
		//截取字符串 
		else if(k==2)
		{
			scanf("%d%d",&a,&b);
            s[a+b]='\0';
            strcpy(temp, &s[a]);
            strcpy(s, temp);
            printf("%s\n",s);
		}
		//插入字符串 
		else if(k==3)
		{
			scanf("%d%s",&a,temp);
			//先把s[a]后面的部分拼接到temp上 
			strcat(temp,&s[a]);
			s[a]='\0';
			strcat(s,temp);
			printf("%s\n",s);
		}
		else if(k==4)
		{
			 int flag=0;
             char keep[1000]={0};
             scanf("%s",temp);
             for(i=0;s[i]!='\0';i++)
             {
                 if(s[i]==temp[0])
                 {
                     for(j=0;j<strlen(temp);j++)
                     {
                         keep[j]=s[i+j];
                     }
                     if(strcmp(keep,temp)==0)
                     {
                         printf("%d\n",i);
                         flag++;
                         break;
                     }
                 }   
             }
              if(!flag) printf("-1\n");
	
		}
		
	}
	return 0;
}
