#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node* next;
};

int main(){
//to do list
// create a struct , node , data and pointer to the next node.
//pointers
//add to head , add at last , insert , remove
//head pointer of integer type to store the first element
//last node should store null
//traverse the node in the linked list from head

struct node* head;
head = NULL;
struct node* temp = (struct node*)malloc(sizeof(struct node))
;
head = temp;
head->data = 2;
head->next=NULL;


struct node* second = (struct  node*)malloc(sizeof(struct node));
second->data=4;
second->next = NULL;
temp->next = second;

struct node* third = (struct  node*)malloc(sizeof(struct node));
third->data=6;
third->next = NULL;
second->next = third;
//struct node* print = head;
while(head!=NULL){

  printf("%d",head->data);
  head = head->next;
}



}