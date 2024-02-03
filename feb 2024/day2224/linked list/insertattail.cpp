#include <iostream>

using namespace std;

class  node{

        public:
            int data;
            node* next;

            node(int data)
            {
                this->data =data;
                this->next = NULL;
            }


     
};

void insertAtHead(node  *&head,int d)
{
        node * temp = new node(d);
        temp ->next = head;  //  linking
        head = temp;    // updating
}

void innsertAtTail(node *&tail,int d)
{
        node *temp = new node(d);

        tail->next = temp;
        tail =tail->next; // or tail = temp
            
}


void print(node *&head)
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

    node* node1 = new node(10);
    // node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;


    innsertAtTail(tail,11);
    innsertAtTail(tail,12);
    innsertAtTail(tail,13);
    innsertAtTail(tail,14);
    print(head);





    // delete node1;

           
          
    return 0;
}