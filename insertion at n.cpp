#include <iostream>
#include<stdlib.h>

using namespace std;
struct node
{
    int data;
  node* next;

};
node* start;


int main()
{

    start =NULL;
    int n,x;
    cin>>n;
    node* temp,*temp1;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        temp=(node*)malloc(sizeof( node*));
        temp->data=x;
        if (start==NULL)
        {
            start=temp;
            temp1=temp;
            temp->next=NULL;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
            temp->next=NULL;
        }
    }
    temp=start;
    for(int i=0;i<n;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    int y;
    cin>>y;
    temp1=start;
    for(int i=1;i<y-1;i++)
    {
        temp1=temp1->next;
    }
        temp=(node*)malloc(sizeof( node*));
        cin>>x;
        temp->data=x;
        temp->next=temp1->next;
        temp1->next=temp;
        temp=start;
       while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;

}
