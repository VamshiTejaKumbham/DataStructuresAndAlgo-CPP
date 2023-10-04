#include<iostream>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
class Queue{
    public:
        Node* head;
        Node* tail;
        Queue(){
            this->head = NULL;
            this->tail = NULL;
        }

    
        void enqueue(int data){
            Node* newNode = new Node(data);
            if(this->head == NULL ){
                this->head = newNode;
                this->tail = newNode;
                cout << newNode->data << " has been Enqueued." << endl;
                return;
            }
            this->tail->next = newNode;
            this->tail = newNode;
            cout << newNode->data << " has been Enqueued." << endl;
        }

        void dequeue(){
            if(this->head == NULL){
                cout << "Queue Empty : Not enough data to Dequeue." << endl;
                return;
            }
            Node* temp = this->head;
            this->head = head->next;
            cout << temp->data << " has been Dequeued" << endl;
            delete(temp);
        }

        void peek(){
            if(this->head == NULL){
                cout << "Nothing to Peek in here!" << endl;
                return;
            }
            cout  << "You're Peeking : "<<  this->head->data << endl;
        }
};
int main(){
        Queue q = Queue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.dequeue();
        q.peek();
    return 0 ; 
}