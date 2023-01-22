#include<iostream>
using namespace std;

#define N 10

class Deque{
    int deque[N],front,rear,size;

    public:
    Deque(){
        front = -1;
        rear = -1;
    }

    void enquefront(int x){
        if((front==0 &&rear ==N-1)||(front==rear+1)){
            cout<<"Deque is full"<<endl;
        }
        else if(front == -1 && rear == -1){
            front = rear = 0;
            deque[front] = x;
        }
        else if(front == 0){
            front = N-1;
            deque[front] = x;
        }
        else{
            front--;
            deque[front] = x;
        }
    }

    void enquerear(int x){
        if((front==0 &&rear ==N-1)||(front==rear+1)){
            cout<<"Deque is full"<<endl;
        }
         else if(front == -1 && rear == -1){
            front = rear = 0;
            deque[front] = x;
        }
        else if(rear == N-1){
              rear = 0;
              deque[rear] = x;
        }
        else{
            rear++;
            deque[rear] = x;
        }
    }

    void dequefront(){
        if(front == -1 && rear == -1){
            cout<<"queue is empty"<<endl;
        }
        else if(front == rear){
           front = rear = -1;
        }
        else if(front == N-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    void dequerear(){
        if(front == -1 && rear == -1){
            cout<<"queue is empty"<<endl;
        }
        else if(front == rear){
           front = rear = -1;
        }
        else if(rear == 0){
            rear = N-1;
        }
        else{
            rear--;
        }
    }

    void getfront(){
        cout<<deque[front]<<endl;
    } 
    void getrear(){
        cout<<deque[rear]<<endl;
    } 

    void Display(){
      if(front == -1 && rear == -1){
            cout<<"queue is empty"<<endl;
        }
    else{
        int i = front;
        while(i!=rear){
            cout<<deque[i]<<" ";
            i = (i+1)%N;
        }
        cout<<deque[rear]<<endl;
    }
        
        
    }

};

int main(){

    Deque q;
    q.dequefront();
    q.enquefront(6);
    q.enquefront(9);
    q.enquerear(8);
    q.enquerear(0);
    q.Display();
    q.dequerear();
    q.Display();

    return 0;
}