//#include<stdio.h>
//void inv(int *x,int n)
//{
//	int *p,temp,*i,*j,m=(n-1)/2;
//	p=x+m;j=x+n-1;
//	for(i=x;x<=p;i++,j--)
//	{
//		temp=*i;
//		*i=*j;
//		*j=temp;
//	}
//	return ;
//}
//int main()
//{
////	void inv(int *x,int n);
//	int i,a[10]={2,3,1,6,4,7,9,8,0,4};
//	printf("Then orginal array:\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	inv(a,10);
//	printf("Then afterarray:\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//} 

//用指针变量做实参 
#include<stdio.h>
void inv(int *x,int n)
{
	int *p,temp,*i,*j,m=(n-1)/2;
	p=x+m;j=x+n-1;
	for(i=x;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
}
int main()
{
	int i,a[10]={2,3,1,6,4,7,9,8,0,4};
	int *p=a; 
	printf("Then orginal array:\n");
	for(p=a;p<a+10;p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
	inv(a,10);
	printf("Then afterarray:\n");
	for(p=a;p<a+10;p++)
	{
		printf("%d ",*p);
	}
	return 0;
} 


