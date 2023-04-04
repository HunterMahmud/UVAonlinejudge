#include<stdio.h>
int main()
{
    int i,j,t,ns,h=0,l=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        h=0,l=0;
        scanf("%d",&ns);
        int n[ns+1];
        n[0]=-100;
        for(j=0;j<ns;j++)
        {
        scanf("%d",&n[j+1]);
        if(n[j]<n[j+1])
            h++;
        if(n[j]>n[j+1])
            l++;
        }
        printf("Case %d: %d %d\n",i,h-1,l);
    }
    return 0;
}
