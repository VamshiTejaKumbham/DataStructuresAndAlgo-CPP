#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            this->left = this->right = NULL;
        }
};

class BST{
    private:
        Node* root;
        Node* insertData(Node* root, int key){
            if(root == NULL) {
                root = new Node(key);
            }
            else if(key < root->data){
                    root->left = insertData(root->left, key);
            }
        }
};
int main(){

    return 0;
}