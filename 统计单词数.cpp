#include <stdio.h>
#include <string.h>
int main() {
	void longword(char a[]);
	char str[80];
	printf("�������ַ�����\n");
	printf("����ע���ÿո������\n");
	gets(str);//�����ַ���
	longword(str);//���û�ȡ��󵥴ʵĺ���
	return 0;
}

void longword(char a[]) {
	//�����ַ���t1���洢��ĵ��ʣ�t2���洢a�еĵ���
	char t1[30], t2[30];
	t1[0] = '\0';
	int q=1;
	int k = strlen(a),i,j=0;
	for (i = 0; i < k; i++) {
		j = 0;
		while ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
			t2[j++] = a[i++];
			if(a[i]==' ')
		{
			q++;	
		} 
		}
		t2[j] = '\0';
		if (strlen(t1) < strlen(t2)) {
			strcpy(t1, t2);
//			q=strlen(t1);
		}
	}
	printf("%d\n",q); 
	printf("%s",t1); 

}

