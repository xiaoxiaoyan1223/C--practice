#include<bits/stdc++.h>
using namespace std;
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
const int N=1e8+10;
int a[N],cnt;
//ѡ������ 
int *option_sort(int a[],int temp)
{
	int count,temp2;
	for(int i=0;i<temp-1;i++)
 	{
 	count=i;
 	for(int j=count+1;j<temp;j++)
 	{
 		//ÿ��ѭ���ҳ�δ���򲿷� ��Сֵ 
 		if(a[i]>a[j])
 		{
 			temp2=a[i];
 			a[i]=a[j];
 			a[j]=temp2;
		 }
	 }
	 return a;
  } 
//  	return 1;
}
//ð������
int *bubble_sort(int a[],int temp)
{
	int temp1=0;
	for(int i=0;i<temp;i++)
	{
		for(int j=0;j<temp-i-1;j++)
		{
			//�����Ƚϣ��������򽻻�λ�� 
			if(a[j]>a[j+1])
			{
				temp1=a[j];
				a[j]=a[j+1];
				a[j+1]=temp1;
			}
		}
	}
	return a;
} 
main(){
    int i = 0;
    clock_t start_time;
    clock_t finish_time;
    clock_t real_time;
    float current_time;
    float program_time;
	fstream f;//�����ȡ�ļ��� f
	f.open("D:\�������ݼ�-1K-1ǧ��\1000.txt");
	int temp;
	for(int i=0;i<1001;i++)
	{
		f>>a[i];
		temp++;
	}
	cout<<endl;
	f.close();
    start_time=clock();
    current_time=(float)start_time / CLOCKS_PER_SEC;
    printf("Program start time: %f\n",current_time);
	
	//ѡ������ 
//	option_sort(a,temp);
	//ð������ 
	bubble_sort(a,temp);
	
    finish_time=clock();
    current_time=(float)finish_time/CLOCKS_PER_SEC;
    printf("Program finish time:%f\n",current_time);
    program_time=(float)(finish_time-start_time)/CLOCKS_PER_SEC;
    printf("Program complete time: %f\n",program_time);
    return 0;
}
