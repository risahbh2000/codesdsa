#include <bits/stdc++.h>

using namespace std;



class node{
    public:
            int data;
            node * next;

            node(int data)
            {
                this->data  =data;
                this->next  =NULL;
            }

};

void inserthead(node* &head,int d)
{
        node * temp = new node(d);

        temp->next = head;
        head=temp;


}

void print(node*&head)
{
    node *temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}


int main() {
           
           node *node1 = new node(10);
           node *head = node1;
           print(head);

                inserthead(head,13);
                inserthead(head,14);
                inserthead(head,15);

print(head);


          
    return 0;
}