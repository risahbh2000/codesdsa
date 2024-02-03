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

int main() {

    node* node1 = new node(10);
    // node* node1 = new node(10);


    

    // delete node1;

           
          
    return 0;
}