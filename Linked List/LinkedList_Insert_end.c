// Single Linked List (Inserting a Node at the Beginning)
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
};

typedef struct Node NODE;

void travesrs(NODE *PTR) {
  while (PTR != NULL) {
    printf("Data is %d\n", PTR->data);
    PTR = PTR->next;
  }
}

// NODE *insert_big(NODE *hed) {
//   NODE *ptr;
//   ptr = (NODE *)malloc(sizeof(NODE *));
//   printf("Enter a new element\n");
//   if (scanf("%d", &ptr->data) == 1) {
//     ptr->next = NULL;
//     if (hed == NULL) {
//       hed = ptr;
//       ptr->next = NULL;
//     } else {
//       ptr->next = hed;
//       hed = ptr;
//       printf("Block Check\n");
//     }
//   }
//   return ptr;
// }

NODE *Insert_end(NODE *head) {
  NODE *i;
  NODE *ptr;
  ptr = (NODE *)malloc(sizeof(NODE *));
  ptr->next = NULL;
  i = head;
  printf("Enter the new data\n");
  if (scanf("%d", &ptr->data) == 1) {
    if (head == NULL) {
      head = ptr;
    } else {
      while (i->next != NULL) {
        i = i->next;
      }
      i->next = ptr;
    }
  }
  return head;
}

int main() {
  NODE *head;
  NODE *second;
  head = (NODE *)malloc(sizeof(NODE *));
  second = (NODE *)malloc(sizeof(NODE *));
  ;
  head->data = 10;
  head->next = second;
  second->data = 11;
  second->next = NULL;
  printf("Linked List Before Insertion\n");
  travesrs(head);

  // head = insert_big(head);
  // printf("Linked List After Insertion\n");

  head = Insert_end(head);
  travesrs(head);

  // printf("Hello World\n");
  return 0;
}