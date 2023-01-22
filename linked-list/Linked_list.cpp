#include<iostream>
using namespace std;

// creating node

class Node{
   public:
    int data ;
    Node* next;
};

//allocate 3 nodes in the heap
int main(){
  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;

  // allocate 3 nodes in the heap
  one = new Node();
  two = new Node();
  three = new Node();

  // assign value 
  one->data = 2;
  two->data = 69;
  three->data = 34;

  //connnect nodes 
  one->next = two;
  two->next = three;
  three->next = NULL;

  //printing the linked list
  head = one;
  while(head!= NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}
