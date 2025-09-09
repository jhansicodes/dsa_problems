#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int main(){
    cout<<"enter root element";
    int x;
    cin>>x;
    node *root=new node(x);
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        cout<<"enter left child";
        cin>>x;
        if(x!=-1){
            temp->left=new node(x);
            q.push(temp->left);

        }
        cout<<"enter right child";
        cin>>x;
        if(x!=-1){
            temp->right=new node(x);
            q.push(temp->right);
        }
        q.pop();


    }
    return 0;


}