#include<iostream>
using namespace std;
// Circular  S LL --> lastNode->next = head
// Circular  D LL --> lastNode->next = head ;  firstNode->prev= lastnode

class Node{
        
    public:
        int data;
        Node* prev; Node* next;
        Node(int data){
            this->data = data;
            this->prev = this->next = NULL;
        }
};
class CircDoublyLinkedList{
    public: 
        Node* head; Node* tail;
        CircDoublyLinkedList(){
            this->head = NULL;
            this->tail = NULL;
        }
        void append(int data){
            Node* newNode = new Node(data);
            if(head == NULL  && tail ==NULL){
                this->head = newNode;
                this->tail = newNode;
                return;
            }
            Node*temp = this->tail;
            this->tail->next = newNode; 
            this->tail = newNode; 
            this->tail->prev = temp;
            this->tail->next = this->head;
            this->head->prev = this->tail;
            // delete(temp); 
        }
        void display(){
             Node* temp = this->head;
            while(temp->data != this->tail->data) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << temp->data << endl;
            delete(temp); 
        
        }
        
};
int main(){
     CircDoublyLinkedList list = CircDoublyLinkedList();         // head = tail = NULL
    list.append(100);
    list.append(200);
    list.append(300);
    list.append(400);
    list.append(500);
    list.display();

    return 0;
}