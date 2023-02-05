#include <stdio.h>
#include <stdlib.h>
#define size 50
int stack[size];
int top=-1;
void push(){
    int data;
    if(top==size-1){
        printf("Stack is overfloaw\n");
    }
    else{
        printf("Enter the data you want to push\n");
        scanf("%d",&data);
        stack[++top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is underflow\n");
    }
    else{
        top--;
        printf("Delete successfully\n");
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=0;i<top+1;i++){
            printf("The %d elements is =%d\n",(i+1),stack[i]);
        }
    }
}

int main(){
   
    while(1)
    {
        int choice;
    printf("1:For Insert elements\n");
    printf("2:For Delete elements\n");
    printf("3:For Display eements\n");
    printf("4:For Exit the operation\n");
    scanf("%d",&choice);
      switch(choice){
        case 1:
             push();
             break;
        case 2:
             pop();
             break; 
        case 3:
              display();
              break;
        case 4:
              exit(0);
        default:
              printf("Enter choice is wrong\n");
      }
    }
    
    return 0;
}