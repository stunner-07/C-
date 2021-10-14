#include <stdio.h>

int max_of_four()
{
    int i,n,num,t;
    scanf("%d",&n);
    t=n;
    for(i=1;i<4;i++)
    {
         scanf("%d",num);

        if(num>t)
            t=num;
    }
    return t;
}
int main()
{
    int t;
    int ans=max_of_four(t);
    printf("%d",ans);

    return 0;
}
