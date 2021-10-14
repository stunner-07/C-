#include <iostream>
#include <cstdio>
using namespace std;
struct node
{
    int data;
     node* next;

};
node *head;
head=NULL;

int main()
{
    int n,x;
    cin>>n;
    node* temp;
    for(int i=0;i<n;i++)
    {
    cin>>x;
    temp=(node*)malloc(sizeof(node*));
    temp->data=x;
    if (head==NULL)
    head=temp->next;
    else
    temp->next=NULL;
    }
    temp=head;
    for(int i=0;i<n;i++)
    {
        cout<<temp->data<<endl;
        temp=temp->next;


    }
    return 0;

}
