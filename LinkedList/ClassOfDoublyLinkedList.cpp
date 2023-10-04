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
            // cout << "Empty List : Adding an element at start." <<  endl;
            this->head = newNode;
            this->tail = newNode;
            return;
        }
        Node* temp = this->head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        this->tail = newNode;
        newNode->prev = temp;

    }  

    void insertAtStart(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            this->head = newNode;
            this->tail = newNode;
            return;
        }
        Node* temp = this->head;
        temp->prev = newNode;
        newNode->next = temp;
        this->head = newNode;
    } 

    void insertAtpos(int pos, int data){
        if(this->head == NULL){
            insertAtStart(data);
            return;
        }

        Node* newNode = new Node(data);
        int c=1;
        Node* temp =  this->head;
        while(c<pos-1){
            temp = temp->next;
            c++;
        }
        if(temp->next == NULL){
            append(data);
            return;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;

    }

    void deleteFromStart(){
        if(this->head ==  NULL){
            cout << "Empty List :  Abort Deletion!" << endl;
            return;
        }
        if(this->head->next == NULL){
            delete(head);
            this->head = this->tail = NULL;
            return;
        }
        Node* temp = this->head;
        this->head = this->head->next;
        this->head->prev = NULL;
        delete(temp);
    
    }

    void deleteFromEnd(){
        if(this->head ==  NULL){
            cout << "Empty List :  Abort Deletion!" << endl;
            return;
        }
        if(this->head->next == NULL){
            delete(head);
            this->head = this->tail = NULL;
            return;
        }
        Node* temp = this->tail;
        this->tail = this->tail->prev;
        this->tail->next = NULL;
        delete(temp);

    }

    void deleteKey(int key){
        Node* temp = this->head;
        while(temp->data != key){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        delete(temp);

    }

    void print(){
        Node* temp = this->head;
        while(temp->next != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << tail->data << " ";
    } 

    void printRev(){
        Node* temp = this->tail;
        while(temp != this->head){
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << head->data << " ";
        }

    int getlen(){
        Node* temp = this->head;
        int len=1;
        while(temp->next != NULL){
            len++;
            temp = temp->next;
        }
        return len;
    } 
};

int main(){
        DLL list = DLL();

        // list.insertAtStart(10);
        // list.insertAtStart(69);
        // list.insertAtStart(70);


        list.append(10);
        list.append(20);
        list.append(30);
        list.append(80);
        list.append(99);
        list.print();
        cout << endl;


        // list.insertAtpos(3,44);
        // list.insertAtpos(7,100);

        // list.deleteFromStart();
        // list.deleteFromEnd();
        // list.print();
        
        // list.printRev();

        
        list.deleteKey(30);
        list.print();

        
    return 0;
}