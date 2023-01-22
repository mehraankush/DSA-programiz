#include<iostream>
using namespace std;

struct Listnode{
    int val;
    Listnode* next;
};

class solution{
    public:
      Listnode* mergeTwoLists(Listnode* list1, Listnode* list2){
            
            Listnode* temp1 = list1;
            Listnode* temp2 = list2;
            Listnode* dummnyNode = new node(-1);
            Listnode* temp3 = dummnyNode;
           
           while(temp1 != NULL && temp2!=NULL){
             
              if(temp1->val <= temp2->val){
                 node->next = temp1;
                 temp1 = temp1->next;
                 temp3 = temp3->next;
              }
              else{
                node->next=temp2;
                temp2=temp2->next;
                temp3=temp3->next;
              }
           }
           while(temp1!= NULL){
            temp3->next = temp1;
            temp1 = temp1->next;
            temp3 = temp3->next;
           }

           while(temp2!= NULL){
            temp3->next = temp2;
            temp2 = temp2->next;
            temp3 = temp3->next;
           }

       return dummnyNode->next;
      }
};

/* recursive way
   if(list1==NULL){
     return list2;
   }
   if(list2==NULL){
     return list1;
   }
   node* result;
   if(list1->val<=list2->val){
    result =list1;
    result->=merge(list1->next,list2);
   }else{
     result=list2;
     result->next = merge(list1,list2->next);
   }
   return result;
  */
   