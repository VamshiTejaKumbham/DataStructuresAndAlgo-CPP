#include<iostream>
using namespace std;
class Stack{
    private:
        int MAX;
        int* arr;
        int top;
    public:
        Stack(int n){
            this->MAX = n;
            arr = new int[MAX];
            top = -1;
        }

        void push(int data){
            if(this->top >= this->MAX){
                cout << "Stack OverFlow." << endl;
                return;
            }
            else{
                arr[++top] = data;
                cout << data << " has been Pushed into the Stack." << endl;
            }
        }

        void pop(){
            if(this->top < 0){
                cout << "Stack Underflow!" << endl;
                return;
            }
            else{
                int val = arr[top--];
                cout  <<  val << " has been Popped out of the Stack." << endl;
            }
        }

        void peek(){
            cout << arr[this->top] << endl;
        }

};
int main(){
        Stack s = Stack(10);
        s.push(20);
        s.push(40);
        s.push(50);
        s.push(60);
        s.peek();
        s.push(80);
        s.push(70);
        s.push(90);
        s.pop();
        s.peek();

    return 0;
    }
