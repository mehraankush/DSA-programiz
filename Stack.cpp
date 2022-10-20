#include <iostream>
using namespace std;
#define MAX 10

int Size = 0;

//Creating Stack
struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s){
    s->top = -1;
}

//checking if the stack is full 
int IsFull(st *s){
    if(s->top == MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

//check if stack is empty
int IsEmpty(st *s){
    if(s->top == -1){return 1;}
    else{
        return 0;
    }
}
//add element into stack

void push(st *s,int newitem){
    if(IsFull(s)){
        cout<<"stack is full"<<endl;
    }else{
        s->top++;
        s->items[s->top]=newitem;
    }
    Size++;
}

//remove the element from the stack
void pop(st*s){
    if(IsEmpty(s)){
        cout<<"stack is empty"<<endl;
    }
else{
    cout<<"Item popped : "<<s->items[s->top];
    s->top--;
}
    Size--;
    cout<<endl;

}

void printStack(st *s){
    cout<<"Stack :";
    for(int i=0;i<Size;i++){
        cout<<s->items[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int ch;
    st *s=(st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s,3);
    push(s,2);
    push(s,6);
    push(s,8);
    push(s,1);

    printStack(s);

    pop(s);
    printStack(s);
}


