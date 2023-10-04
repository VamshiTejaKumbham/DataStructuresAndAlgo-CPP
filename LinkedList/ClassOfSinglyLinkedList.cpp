#include<iostream>
using namespace std;
class Node{
    public:  
        int data;
        Node* next;

        Node(int data) {
            this->data=data;
            this->next=NULL;
        }
};
 
 class LinkedList{
    public:
        Node* head;
        LinkedList(){
            this->head = NULL;
        }

        // Appending 
        void append(int data){
            Node* newNode = new Node(data);
            if(this->head == NULL){ 
                this->head = newNode;
                return;

            }
            // if not the first, go to the end to append
            Node* temp = head;
            while(temp->next != NULL){
            temp = temp->next;
            }
            temp->next = newNode;

        }

        // Inserting an Element at Start
        void addatStart(int data){
            Node* newNode = new Node(data);
            if(this->head == NULL){
                this->head = newNode;
            }
            Node* oldhead = head;
            this->head = newNode;
            this->head->next = oldhead;
        }

        // Inserting an Element after a Specific Element
        void insertAfter(int data1, int data2){
            if(this->head == NULL) {
                Node* newNode = new Node(data2);
                cout << "List is Empty! Adding " << data2 << " at start" << endl;
                this->head = newNode;
                return;
            }
            // search for data 1
            Node* temp = head;
            while(temp->data != data1 && temp!= NULL)
                temp = temp->next;
            if(temp == NULL){
                cout << data1 << " does not exist in the LL. Aborting Insertion" << endl;
                return;
            }
            // if data1 found - >, adding data2 after data1
            Node* newNode = new Node(data2);
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void deleteFromStart(){
            if(this->head == NULL){
                cout << "The List is empty! Aborting deletion" << endl;
                return;
            }
            // If only one element is present.
            if(this->head->next == NULL){
                delete(head);
                this->head == NULL;
                return;
            }
            // If there are elements. 
            Node* temp = this->head;
            this->head = head->next;
            delete(temp);
        }

        void deleteFromEnd(){
            if(this->head == NULL){
                cout << "The List is empty! Aborting Deletion" << endl;
                return;
            }

            if(this->head->next==NULL){
                delete(head);
                this->head = NULL;
                return;
            }
            Node* temp = this->head;
            while(temp->next->next != NULL){
                temp = temp->next;
                }
                delete(temp->next);
                temp->next= NULL;
                return;
            
        }

        void deleteByKey(int data){
            if(this->head==NULL){
                cout << "The List is empty! Aborting deletion" << endl;
                return;
            }
            Node* pretemp = this->head;
            Node* temp = this->head;
            while(temp->data != data && temp->next != NULL){
                pretemp = temp;
                temp = temp->next;
            }
            if(temp->data != data){
                cout << "Element not found in the List! Aborting the deletion." << endl;
                return;
            }
            pretemp->next = temp->next;
            delete(temp);
        }

        void printlist(){
            Node* temp = head;
            while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
            }
            cout << endl;
        }

        void printReverse(Node* head){
            if(head == NULL) return;
            printReverse(head->next);
            cout << head->data << " ";
        }
 };

int main(){
    LinkedList list = LinkedList(); // head = NULL
    list.append(100);
    list.append(200);
    list.append(300);
    list.append(400);
    list.append(500);
    list.printlist();

    list.addatStart(10);
    list.addatStart(20);
    list.addatStart(30);
    list.printlist();

    list.insertAfter(400,450);
    list.printlist();

    list.deleteFromStart();
    list.printlist();

    list.deleteFromEnd();
    list.printlist();

    list.deleteByKey(400);
    list.printlist();


    list.printReverse(list.head);

    return 0;
}