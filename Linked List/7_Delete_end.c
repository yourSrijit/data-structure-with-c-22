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
    printf("No %d node is = %d\n",i,ptr->data);
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

NODE * deletingAtAntPos(NODE *head){
    int n,i=1;
    printf("Enter the index of the deleting node\n");
    scanf("%d",&n);
    NODE *ptr;
   
    if(head==NULL){
        printf("Linked List is emepty\n");
    }
    else{
      ptr=head;
      while (i!=n)
      {
        ptr=ptr->next;
       i++;
      }
      NODE* j=ptr->next;
      ptr->next=j->next;
      printf("Data deleted from the Linked List %d \n",j->data);
      free(j);
      printf("Sucessfully Deleted\n");
    }
   return head;
}
NODE* deletingAtEnd(NODE* head){
    NODE* ptr=head;
    NODE* q=head->next;
    while (q->next!=NULL)
    {
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    printf("Data deleted from the Linked List %d \n",q->data);
    free(q);
    printf("Sucessfully Deleted\n");
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
    head=deletingAtEnd(head);
    travers(head);
    return 0;
}