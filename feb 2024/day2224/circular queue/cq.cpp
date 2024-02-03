#include <iostream>
#define max 5
using namespace std;



class queue{
                private :  int cq[max]; int front;int rear;

                public:

                queue(int f=-1,int r=-1) // constructor
                {
                    front = -1;
                    rear = -1;
                } 

                void enque(int x)
                {
                            if( front == (rear+1)%max )
                            {
                                cout<<" error! queue is full"<<endl;
                            }
                            else if(front ==-1 && rear ==-1)
                            {
                                        front =0;
                                        rear =0;

                                        cq[rear] = x;
                            }
                            else{
                                    rear = (rear+1)%max;

                                    cq[rear] = x;
                            }

                }

                void deq()
                {

                            cout<<cq[front]<<" is deleted"<<endl;


                        front = (front+1)%max;

                }

                void display()
                {

                            if (front == -1) {
                            cout << "Queue is empty" << endl;
                                       }
         else {
            
            // int i = front;
            do {
                cout << cq[front] << endl;
                front = (front + 1) % max;
            } while (front !=(rear +1)%max );


        }
        }

};


int main() {
           
          
queue oq;

oq.enque(6);
oq.enque(7);
oq.enque(8);
oq.enque(9);
oq.enque(10);
oq.deq();
oq.deq();
oq.enque(11);
oq.enque(12);
cout<<endl;
oq.display();
    return 0;
}