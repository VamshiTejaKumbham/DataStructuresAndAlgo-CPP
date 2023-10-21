#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(60);
    // int x = s.top();
    // cout <<  x;
//    int x = s.size();
//    cout << x;
    display(s);
    return 0;
}