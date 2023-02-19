#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
   struct queue *next;
};
typedef struct queue Queue;
Queue *front = NULL;
Queue *rare = NULL;
void Enqueue(){
    int d;
    Queue* q=(Queue*)malloc(sizeof(Queue));
    if(q==NULL){
        printf("The queue is full\n");  
    }
    printf("Enter data of new Node\n");
    scanf("%d",&d);
    q->data=d;
    q->next=NULL;
    if(front==NULL){
        front=rare=q;
    }
    else{
        rare->next=q;
        rare=q;
    }
}
int Dequeue(){
    int val=0;
    Queue* ptr=front;
    if(front==NULL){
        printf("The Queue is empty\n");
    }
    else{
        val=front->data;
        front=front->next;
    }
    return val;
}
void Display(){
    if(front==NULL){
        printf("The queue is empty\n");
    }
    else
    {
        printf("Data of queue is\n");
    Queue* p=front;
    while (p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    }
    
}

int main()
{
    while (1)
    {
        int choice;
        printf("\nEnter \n1:to Enqueue\n2:to Dequeue\n3:Display\n4: Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            int d = Dequeue();
            if (d != -1)
            {
                printf("The deleted element is %d\n", d);
            }
            break;
        case 3:
            Display();
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
