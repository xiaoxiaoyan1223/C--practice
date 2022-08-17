#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int n;
	scanf("%d",&n);	
	int a[n],i,quit_num,k;
	for(i=0;i<n;i++)//遍历数组,并且把数字给了数组里的元素                                            
	    a[i]=i+1;  
	quit_num = 0;//计数满3退出,数组置0,记录值+1
	i=0;         //计数值
	k=0;         //记录123循环的变量
	
	while(quit_num<n-1)
	{
		if(a[i]!=0)    //计数每3个计数循环
			k++;
		if(k==3)       //满足3  数组值置0,退出值+1,记录值123循环变量置0
		{
			a[i]=0;
			quit_num++;
			k=0;
		}
		i++;
		if(i==n)       //数组从头开始循环
		i=0;
	}
	for (i=0;i<n;i++) 
	if(a[i]!=0)
	printf("%d",a[i]);
    /*********End**********/
    return 0;
}
