#include <bits/stdc++.h>

using namespace std;

class node{

public: int data;  node *next;

        node(int data)
        {

                this->data=data;
                this->next=NULL;

        }


};

void insert(node*&head,node*&tail,int d,int position)
{
    int cnt=1;
        if(position==1)//inserting at head
        {
            node*temp = new node(d);
            temp->next=head;
            head = temp;
            return ;
        }

        node*temp=head;
        while(cnt<position-1)
        {
                temp=temp->next;
                cnt++;
        }

        node *insert = new node(d);


        if(temp->next==NULL)
        {
            tail->next=insert;
            tail = insert;
                return ;
        }

        insert->next = temp->next;
        temp->next=insert;


}

void print(node*&head)
{   

    node *temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}





int main() {
           

node * node1 = new node(10);
node * head = node1;
node * tail = node1;

print(head);


insert(head,tail,11,1);
insert(head,tail,12,3);
insert(head,tail,13,3);
insert(head,tail,13,3);
insert(head,tail,13,3);
insert(head,tail,1,4);

print(head);


    return 0;
}