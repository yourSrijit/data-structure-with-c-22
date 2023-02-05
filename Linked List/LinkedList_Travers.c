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
  travesrs(head);
  printf("Hello World\n");
  return 0;
}