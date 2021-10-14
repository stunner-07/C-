#include <iostream>
#include<stdlib.h>

using namespace std;
struct node
{
    int data;
  node* next;

};
node* start,*temp3;

void printli(node *temp3)
{
    if(temp3 == NULL)
    return ;
    printli(temp3->next);
    cout<<temp3->data<<endl;
}

int main()
{

    start =NULL;
    int n,x;
    cin>>n;
    node* temp,*temp1,*temp2;

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

    cout<<endl;
    printli(start);

    return 0;

}
