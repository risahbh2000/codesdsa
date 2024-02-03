#include <bits/stdc++.h>

using namespace std;


class node{
    public:

    int data;
    node * next;

            node(int data)
            {
                this->data=data;
                this->next=NULL;
            }
    
};


void inserthead(node*&head,int d)
{
    node * temp = new node(d);
    temp->next = head;
    head = temp;

}

void insertTail(node*&tail,int d)
{

        node *temp = new node(d);
        tail->next = temp;
        tail =temp;


}


void insert(node*&head,node *&tail,int pos,int d)
{
        int cnt =1;
        node *temp = head;
           if(pos==1)
        {
            inserthead(head,d);
            return;
        }  


        while(cnt<pos-1)
        {
            temp = temp->next;
            cnt++;
        }

       

        if(temp->next==NULL)
        {
                insertTail(tail,d);
                return;  
        }

        node * insert  = new node(d);

     insert->next = temp->next;
     temp ->next = insert;


}

void print(node*&head)
{
node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

cout<<endl;

}





int main() {
           
          node * node1 = new node(10);
            node *head = node1;
            node *tail = node1;

            inserthead(head,11);
            inserthead(head,12);
            inserthead(head,13);
            insertTail(tail,14);
            insertTail(tail,15);
            insertTail(tail,16);
            insert(head,tail,8,17);

            print(head);

            cout<<head->data<<endl;
            cout<<tail->data<<endl;

    return 0;
}