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
//	int a[14], b[7], flag, j=0,i,k=0;  //a[]��¼�������ݣ�b[]��¼ÿ����Ͽ�ʱ��
//	for(i = 0; i<14  ; i++){  //��������
//		scanf("%d", &a[i]);
//	}
//	
//	for(k = 0; k<14 ;){  //����ÿ����Ͽ���ʱ�䣬����b[]
//		b[j] = a[k] + a[k+1];
//		j += 1;
//		k += 2;
//	} 
//	
//	int max = b[0];
//	flag = 0;
//	for(i = 0 ; i<7 ; i++){  //�ҳ��Ͽ�ʱ�����һ�� 
//		if( max < b[i] ){
//			max = b[i];
//			flag = i;  //flag��¼�����±�
//		}
//	}
//	if(max>8) 
//	printf("%d", flag+1);  //0��ͷ���飬�������flagʱҪ+1
//	else  printf("%d", 0); 
//	return 0;
//}

