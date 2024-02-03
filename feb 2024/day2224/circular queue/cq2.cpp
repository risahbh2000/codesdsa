#include <iostream>
using namespace std;

#define max 5

class CircularQueue {
private:
    int q[max];
    int front;
    int rear;

public:
    CircularQueue() : front(-1), rear(-1) {}

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % max == front;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full!" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
            
        } else {

            rear = (rear + 1) % max;

        }

        q[rear] = x;
    }

    void dequeue() {
        if (front ==-1 && rear ==-1) {
            
            cout << "Error: Queue is empty!" << endl;
            return;
        }

        cout << "Deleted item is: " << q[front] << endl;

        if (front == rear) {
            // Only one element in the queue
            front = rear = -1;
        } else {
            front = (front + 1) % max;
        }
    }

    void display() {
        if (isEmpty()) {

            cout << "Queue is empty." << endl;
            return;   
        }
        int start = front;
        do {
            cout << q[start] << endl;
            start = (start + 1) % max;
        } while (start != (rear + 1) % max);//start reacher after 
    }
};

int main() {
    CircularQueue q;

    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    q.enqueue(6);
    
    q.display();

    return 0;
}
