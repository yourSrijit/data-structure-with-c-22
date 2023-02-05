#include <stdio.h>
#include<stdlib.h>
struct stack
{
  int size;
  int top;
  int *arr;
};
typedef struct stack stack;
int isFull(stack *ptr){
      if(ptr->top==ptr->size-1){
         return 1;
      }
      return 0;
}
int isEmpty(stack *ptr){
      if(ptr->top==-1){
         return 1;
      }
      return 0;
}
void Push(stack *ptr){
    int data;
    if(isFull(ptr)){
        printf("Stack is Full\n");
    }
    else{
        printf("Enter a new elementn\n");
        scanf("%d",&data);
        ptr->top++;
        ptr->arr[ptr->top]=data;
        printf("Insertion succesfully\n");
    }
}
int Pop(stack *ptr){
    int val;
     if(isEmpty(ptr)){
        printf("Stack is empty\n");
     }
     else{
        val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
     }   
}
 void Display(stack *ptr){
    if(ptr->top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=0;i<(ptr->top+1);i++){
            printf("Data is %d\n",ptr->arr[i]);
            // ptr->top--;
        }
    }
 }
int main(){
    stack *st;
    st=(stack*)malloc(sizeof(stack));
    st->size=50;
    st->top=-1;
    st->arr=(int*)malloc(st->size*sizeof(int));
    while(1){
        int choice;
        printf("Enter 1 for Insertion\n");
        printf("Enter 2 for Deletion\n");
        printf("Enter 3 for Didplay\n");
        printf("Enter 4 for Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            Push(st);
            break;
        case 2: 
            printf("Poped elements is %d\n",Pop(st));
            break;
        case 3:
            Display(st);
            break;
        case 4:
            exit(0);
        default:
            printf("You entered a wrong choice\n");
            break;
        }
    }
    return 0;
}