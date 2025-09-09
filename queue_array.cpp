#include<bits/stdc++.h>
using namespace std;
//impementation using array
class queue1{
    int *a;
    int front;
    int rare;
    int size;
public:
    queue1(int n){
        a=new int[n];
        size=n;
        front=rare=-1;
    }
    void print(int a[5]){
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";

        }
        cout<<endl;
    }
    //empty
    bool isempty(){
        return front==-1;
    }
    bool isfull(){
        return rare==size-1;
    }
    //push
    void push(int x){
        //empty
        if(isempty()){
            a[0]=x;
            front++;
            rare++;
            print(a);
        }
        //full
        else if(isfull()){
            cout<<"queue overflow\n";
        }
        //insert 
        else{
            a[rare+1]=x;
            rare++;
            print(a);
        }
         
    }
    //pop from the front
    void pop(){
        //empty
        if(isempty()){
            cout<<"queue underflow"<<endl;
        }
        //not empty
        else{
            if(front==rare){
                cout<<"the "<<a[front]<<" is poped"<<endl;
                //in queue only one element present
                front=rare=-1;
            }
            else{
                cout<<"the "<<a[front]<<" is poped"<<endl;
                front++;
            }

        }
         
    }
    //front
    int start(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return a[front];
            
        }
    }


};
 
int main(){
    queue1 q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.push(10);
    q.push(123);
    q.push(100);
    cout<<q.isfull()<<endl;;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.isempty()<<endl;
    //when queue is empty then start we call then it print -1 and queue is empty so to overcome this we use this 
    
    int x=q.start();
    if(!q.isempty()){
        cout<<x<<endl;
    }
    




    
}


