#include<stdio.h>
int main()
{
int i,n,x,k,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&x);
arr[i]=x;
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(k=0;k<n-1;k++)
{
for(i=0;i<n-k-1;i++)
{
if(arr[i]>arr[i+1])
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
}
printf("\n");
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































