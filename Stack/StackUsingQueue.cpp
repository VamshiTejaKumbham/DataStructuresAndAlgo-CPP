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
    private:
        Node* head;
        Node* tail;
    public:
        Queue(){}
        Queue(Node* head, Node* tail){
            this->head = head;
            this->tail = tail;
        }
        int enQueue(int data) {
            Node* newNode = new Node(data);
            if(newNode == NULL) {
                return -1;
            }
            if(this->head == NULL) {
                this->head = newNode;
                this->tail = newNode;
                cout << newNode->data << " has been enqueued!" << endl;
                return newNode->data;
        
            }
            else{
            this->tail->next = newNode;
            this->tail = newNode;
            cout << newNode->data << " has been enqueued!" << endl;
            return newNode->data;
            }
        }
        int deQueue() {
            if(this->head == NULL) {
                cout << "Nothing to deQueue!" << endl;
                return -1;
            }
            Node* temp = this->head;
            int deletedVal = temp->data;
            this->head = head->next;
            cout << temp->data << " has been dequeued!" << endl;
            delete(temp);
            return deletedVal;
        }
        bool isEmpty() {
            return this->head;
        }
        int peek() {
            if(this->head == NULL) return -1;
            else return this->head->data;
        }
};
class StackusingQ{
    public:
        Queue q;
        StackusingQ(){
            this->q = Queue(NULL, NULL);
        }
        int push(int data){
            if(q.enQueue(data) == -1){
                cout << "Stack Overflow." << endl;
                return -1;
            }
            return data;
        }

        void pop(){
            if (q.isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
            }
            q.deQueue();
        }

        int peek(){
            int frontData = q.peek();
            if (frontData == -1) {
                cout << "Stack is empty" << endl;
            }
            return frontData;

        }
};
int main(){
    StackusingQ s = StackusingQ();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    return 0;
}