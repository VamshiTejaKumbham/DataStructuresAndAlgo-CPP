#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> q;
    q.push(20);
    q.push(16);
    q.push(140);
    q.push(90);

    display(q);
    
    return 0;
}