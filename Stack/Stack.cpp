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

class Stack{
    public:
        Node* head;
        Node* top;
        Stack(){
            this->head = NULL;
            this->top = NULL;
        }
        void push(int data){
            Node* newNode = new Node(data);
            if(newNode == NULL){
                cout << "Stack Overflow!" << endl;
                return;
            }
            else if(this->head == NULL){
                this->head = newNode;   
                this->top = newNode;
                return;         
            }
            Node* temp =  this->head;
            while(temp->next != NULL){
                temp =  temp->next;
            }
            temp->next = newNode;
            newNode->next = NULL;
            this->top = newNode;
        }

        void pop(){
            if(this->head == NULL){
                cout << "Stack Underflow!" << endl;
                return;
            }
            else if(this->head != NULL && this->top != NULL && this->head == this->top){
                cout << top->data << " has been popped." << endl;
                return;
            }
            Node* temp = this->head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            cout << temp->next->data << " has been popped." << endl;
            delete(temp->next);
            temp->next = NULL;
            this->top = temp;
        }

        void peek(){
            cout << this->top->data << endl;
        }

};
int main(){
    Stack s = Stack();
    s.push(20);
    s.push(40);
    s.push(60);
    s.pop();
    s.peek();
    return 0;
}