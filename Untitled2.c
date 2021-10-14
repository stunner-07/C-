#include <stdio.h>
/*converting decimal to binary and storing binary into array */
int main()
{
    int x,y,n,j=0,i=1;
    scanf("%d",&x);
    y=x;
    while(y!=0)
    {
        y=y/2 ;
        j++;
    }
    int a[j];
    while(x!=0)
    {
        n=x%2;
        x=x/2;
        a[j-i]=n;
        i++;
    }
    for (i=0;i<j;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
