#include<stdio.h>
int main()
{
	int a[6][6],sum=0;
	int i=0,j=0,m=0,n=0;
	for(i=0;i<7;i++)
	{
	  for(j=0;j<2;j++)
	  {
	  	scanf("%d",&a[i][j]);
	  }
		
	}
	for(m=0;m<=6;m++)
	{
		for(n=0;n<2;n++)
	   {
	  	sum+=a[m][n];
	   }
	  	if(sum>8)
	  	{
	  		printf("%d",m+1);
	  		break;
		}
		else sum=0;
		
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int a[14], b[7], flag, j=0,i,k=0;  //a[]记录输入数据，b[]记录每天的上课时间
//	for(i = 0; i<14  ; i++){  //数据输入
//		scanf("%d", &a[i]);
//	}
//	
//	for(k = 0; k<14 ;){  //计算每天的上课总时间，放入b[]
//		b[j] = a[k] + a[k+1];
//		j += 1;
//		k += 2;
//	} 
//	
//	int max = b[0];
//	flag = 0;
//	for(i = 0 ; i<7 ; i++){  //找出上课时间最长的一天 
//		if( max < b[i] ){
//			max = b[i];
//			flag = i;  //flag记录数组下标
//		}
//	}
//	if(max>8) 
//	printf("%d", flag+1);  //0开头数组，所以输出flag时要+1
//	else  printf("%d", 0); 
//	return 0;
//}

