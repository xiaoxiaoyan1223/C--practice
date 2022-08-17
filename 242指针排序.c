#include<stdio.h>
/*********Begin*********/
int sort(int *x,int n)
{
int i,j,temp;
for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(x+j)<*(x+i))
            {
                temp=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=temp;
            }
        }
    }
    return *(x+n-1);
}
/*********End**********/
int main(void)
{
    int n,s[110],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    int *p;
    p=s;
    int ans;
	/*********Begin*********/

    ans=sort(p,n);
	/*********End**********/
    printf("%d",ans );
    return 0;
}
