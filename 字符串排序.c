#include<stdio.h>
#include<string.h>
int main(void)
{
    /*********Begin*********/
    char a[100],b[100],c[100],t[100];
    int x,y,z;
    scanf("%s%s%s",a,b,c);
    x=strcmp(a,b);
    y=strcmp(a,c);
    z=strcmp(b,c);
    //没必要考虑字符串相等的情况
    if(x>0&&y>0&&z>0)     //a>b>c 
        printf("%s\n%s\n%s",c,b,a);
    if(x>0&&y>0&&z<0)//a>c>b
        printf("%s\n%s\n%s",b,c,a);
    if(x<0&&y>0&&z>0)//b>a>c 
        printf("%s\n%s\n%s",c,a,b);
    if(x<0&&y<0&&z>0)//b>c>a
        printf("%s\n%s\n%s",a,c,b);
    if(x>0&&y<0&&z<0)//c>a>b
        printf("%s\n%s\n%s",b,a,c);
    if(x<0&&y<0&&z<0)//c>b>a
        printf("%s\n%s\n%s",a,b,c);
    /*********End**********/
    return 0;
}
