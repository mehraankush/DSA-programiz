#include<stdio.h>
#include<iostream>
using namespace std;
#define N 5

class Queue{
    private:
    int queue[N];
    int front,rear;

    public:
    Queue(){
        front=-1;
        rear=-1;
    }

    bool isFull(){
        if(front==0 && rear ==N-1){
            return true;
        }
        else if(front==rear+1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int x){
        if(isFull()){
            cout<<"queue is full"<<endl;
         }
        else if(front==-1 && rear==-1){
            front=rear=0;
            queue[rear]=x;
        } else {
          rear = (rear+1)%N;
          queue[rear]= x;
        }

    }

    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else if(front==rear){
            front = rear=-1;
        }
        else{
            front = (front+1)%N;
        }
    }

    void Display(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
        }
        else{
            int i= front;
            while(i != rear){
                cout<<queue[i]<<" ";
                i = (i+1)%N;
            }
            cout<<queue[i]<<endl;
        }
    }
};

int main(){
    Queue q;
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.Display();
    // Size is only five can't take the sixth element
    q.enqueue(6);

    q.dequeue(); 
    q.Display(); 

    q.dequeue();
    q.Display(); 
    
   return 0;
}