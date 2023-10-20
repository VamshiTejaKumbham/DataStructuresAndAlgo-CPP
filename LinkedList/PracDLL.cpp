#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{
    public:
        Node* head;
        Node* tail;
    DLL(){
        this->head = NULL;
        this->tail = NULL;
    }

    void append(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            cout << "The List is empty, inserting the first element" << endl;
            this->head = newNode;
            this->tail = newNode;
            return;
        }
        Node* temp = this->head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        this->tail = newNode;


    }
    void display(){
        Node* temp = this->head;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next; 
        }
    }
};
int main(){
    DLL list = DLL();
    list.append(10);
    list.append(20);
    list.display();

    return 0;
}