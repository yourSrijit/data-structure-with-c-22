#include <stdio.h>
#include<stdlib.h>
struct Node
{   int data; 
    struct Node* next; 
};
typedef struct Node NODE;

void travers(NODE *ptr){
    int i=1;
   while (ptr!=NULL)
   {
    printf("No %d data is = %d\n",i,ptr->data);
    ptr=ptr->next;
    i++;
   }
}
NODE * deletingFirstElm(NODE *head){
    NODE *ptr;
   
    if(head==NULL){
        printf("Linked List is emepty\n");
    }
    else{
      ptr=head;
      head=head->next;
      printf("Data deleted from the Linked List %d \n",ptr->data);
      free(ptr);
      printf("Sucessfully Deeleted\n");
    }
   return head;
}
int main(){
    NODE *head;
    NODE *second;
    NODE *third;
    head = (NODE *)malloc(sizeof(NODE *));
    second = (NODE *)malloc(sizeof(NODE *));
    third = (NODE *)malloc(sizeof(NODE *));
    head->data=10;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=45;
    third->next=NULL;
    printf("Before deleting the 1st elemenets the Linked List is\n");
    travers(head);
    printf("Aftre deleting the 1st elemenets the Linked List is\n");
    travers(deletingFirstElm(head));
    return 0;
}
