#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
node *binary_tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node *temp=new node(x);
    cout<<"enter the left child of"<<x<<endl;
    temp->left=binary_tree();
    cout<<"enter the right child of"<<x<<endl;
    temp->right=binary_tree();
    return temp;
}

int main(){
    cout<<"enter the root node"<<endl;
    node *root;
    root=binary_tree();

}