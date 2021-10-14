#include<iostream>
#include<stdio.h>
using namespace std;
void swapl(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int apartition(int A[],int start,int lend)
{
    int piviot=A[lend];
    int pindex=start;
    for(int i=start;i<lend;i++)
    {
        if(A[i]<=piviot)
        {
        swapl(&A[i],&A[pindex]);
        pindex++;
        }
    }
    swapl(&A[pindex],&A[lend]);
    return pindex;
}
void quicksort (int A[],int start,int lend)
{
    if(start<lend)
    {int pindex=apartition( A,start,lend);
     quicksort (A,start,pindex-1);
     quicksort ( A,pindex+1,lend);
   }
    }
int main()
{
    int A[5],start=0,lend=4;
    for (int i=0;i<5;i++)
        cin>>A[i];
    quicksort (A,start,lend);
    for (int i=0;i<5;i++)
        cout<<A[i];
        return 0;


}
