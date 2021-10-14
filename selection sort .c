#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void select(int arr[],int n)
{
    int i,j=0;
    for(i=j;i<n-1;i++)
    {
        if (arr[j]>arr[i])
            swap(&arr[j],&arr[i]);
    }
    j++;
    select(arr,n);
}
void print(int arr[], int n)
{
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int n,i,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        arr[i]=x;
    }
    print(arr,n);
    select(arr,n);
    print(arr,n);
    return 0;
}
