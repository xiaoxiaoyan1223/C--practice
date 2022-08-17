#include<stdio.h>
#include<math.h>
//3 5 7 9 6
void main(){
	int a[5]={3,5,7,9,2};
//	void sort(int x[]);
	void sort1(int *p);
	int i;
	int *p;
	p=a;
	sort1(p);
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
}
//void sort(int a[]){
//	int i,j,k;
//	for(i=0;i<4;i++){
//		for(j=i+1;j<5;j++){
//			if(a[i]>a[j]){
//				k=a[i];
//				a[i]=a[j];
//				a[j]=k;
//			}
//		}
//	}
//}
void sort1(int *p){
	int i,j,t;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(*(p+i)>*(p+j)){
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
}

