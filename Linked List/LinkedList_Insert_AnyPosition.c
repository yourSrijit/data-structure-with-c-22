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

NODE *insert_any(NODE *hed) {
  NODE *ptr, *j;
  int n, i = 1;
  ptr = (NODE *)malloc(sizeof(NODE *));
  printf("Enter the posoition of thew elemens\n");
  if (scanf("%d", &n) == 1) {
  }
  printf("Enter a new element\n");
  if (scanf("%d", &ptr->data) == 1) {
  }

  if (hed == NULL) {
    hed = ptr;
    ptr->next = NULL;
  } else {
    j = hed;
    while (i != n && j->next != NULL) {
      i = i + 1;
      j = j->next;
    }
    if (i == n && j->next == NULL) {
      j->next = ptr;
      ptr->next = NULL;
    } else if (i == n && j->next != NULL) {
      ptr->next = j->next;
      j->next = ptr;
    } else {
      printf("No data exists");
    }
  }

  return hed;
}

int main() {
  NODE *head;
  NODE *second;
  NODE *third;
  head = (NODE *)malloc(sizeof(NODE *));
  second = (NODE *)malloc(sizeof(NODE *));
  third = (NODE *)malloc(sizeof(NODE *));

  head->data = 10;
  head->next = second;
  second->data = 20;
  second->next = third;
  third->data = 30;
  third->next = NULL;
  printf("Linked List Before Insertion\n");
  travesrs(head);

  printf("Linked List After Insertion\n");
  head = insert_any(head);
  travesrs(head);

  return 0;
}