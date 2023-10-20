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

        Node* insertData( Node* root, int key){
            if(root == NULL) {
                root = new Node(key);
            }
            else if(key < root->data){
                root->left = insertData(root->left, key);
            }
            else if(key > root->data){
                root->right = insertData(root->right, key);
            }
            return root;
            }
        void InOrderTraversal(Node* root){    //LDR
            if(root != NULL){
                InOrderTraversal(root->left);
                cout << root->data << " ";
                InOrderTraversal(root->right);
            }
        }
        void PreOrderTraversal(Node* root){  //DLR
            if(root != NULL){
                cout << root->data << " ";
                PreOrderTraversal(root->left);
                PreOrderTraversal(root->right);
            }
        }
        void PostOrderTraversal(Node* root){    // LRD
            if(root != NULL){
                PostOrderTraversal(root->left);
                PostOrderTraversal(root->right);
                cout << root->data << " ";

            }
        }
    public:
        void insert(int data){
            this->root = insertData(this->root, data);
        }

        void InOrder(){
            InOrderTraversal(this->root);
            cout << endl;
        }
        void PreOrder(){
            PreOrderTraversal(this->root);
            cout << endl;
        }
        void PostOrder(){
            PostOrderTraversal(this->root);
            cout << endl;
        }
};
int main(){

        BST tree = BST();

        tree.insert(15);
        tree.insert(78);
        tree.insert(850);
        tree.insert(142);
        tree.insert(24);
        tree.insert(45);
        tree.insert(39);
        tree.insert(6);
        tree.insert(56);
        tree.insert(69);
        tree.insert(10);
        tree.insert(89);

        tree.InOrder();
        tree.PreOrder();
        tree.PostOrder();
    return 0;
}