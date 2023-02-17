#include <stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int rare,front;
    int *arr;
};
typedef struct queue queue;
void Enqueue(queue *p){
 if(p->rare ==p->size-1){
    printf("The queue is full\n");
 }
 else{
    if(p->rare==-1){
     p->front=0;
    }
    p->rare++;
    int key;
    printf("Enter the data to Insert\n");
    scanf("%d",&key);
    p->arr[p->rare]=key;
    printf("Successfully inserted\n");
 }
}
int Dequeue(queue *p){
    int out;
     if(p->front == -1 || p->front > p->rare){
        printf("The queue is empty\n");
        out=-1;
     }
    else{
        out=p->arr[p->front];
        p->front++;
          printf("Successfully deleted\n");
    }
  
     return out;
}
void Display(queue *p){
    if(p->front == -1 && p->front > p->rare){
        printf("the queue is Empty\n");
    }
    printf("The data of the queue is\n");
    for(int i=p->front;i<=p->rare;i++){
    printf("%d\t",p->arr[i]);
    }
}
int main(){
    queue q;
    q.size=100;
    q.front=q.rare=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    while(1)
    {  int choice;
     printf("Enter \n1:to Enqueue\n2:to Dequeue\n3:Display\n4: Exit\n");
     scanf("%d",&choice);
     switch(choice){
        case 1: Enqueue(&q);
               break;
        case 2:int d=Dequeue(&q);
               if(d!=-1)
              { printf("The deleted element is %d\n",d);}
               break;
        case 3:Display(&q);
               break;
        case 4:
              printf("Successfully exit from the program :)\n");
              exit(1);
        default:
            printf("Opps! wrong choice try again!");
            break;
     }
    }
    
    return 0;
}