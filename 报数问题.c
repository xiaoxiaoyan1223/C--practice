#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int n;
	scanf("%d",&n);	
	int a[n],i,quit_num,k;
	for(i=0;i<n;i++)//��������,���Ұ����ָ����������Ԫ��                                            
	    a[i]=i+1;  
	quit_num = 0;//������3�˳�,������0,��¼ֵ+1
	i=0;         //����ֵ
	k=0;         //��¼123ѭ���ı���
	
	while(quit_num<n-1)
	{
		if(a[i]!=0)    //����ÿ3������ѭ��
			k++;
		if(k==3)       //����3  ����ֵ��0,�˳�ֵ+1,��¼ֵ123ѭ��������0
		{
			a[i]=0;
			quit_num++;
			k=0;
		}
		i++;
		if(i==n)       //�����ͷ��ʼѭ��
		i=0;
	}
	for (i=0;i<n;i++) 
	if(a[i]!=0)
	printf("%d",a[i]);
    /*********End**********/
    return 0;
}
