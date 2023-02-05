#include <stdio.h>
void Swap(int *xp,int *yp){
    int temp =*xp;
    *xp=*yp;
    *yp=temp;
}
void Display(int x[],int n){
    printf("\nThe elements are\n");
    for(int i=0;i<n;i++){
        printf("%d ",x[i]);
    }
    printf("\n");
}

void Sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                Swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[20],n;
    printf("Enter the num of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nBefore sorting the array is \n");
    Display(arr,n);

    Sort(arr,n);
    printf("\nAfter sorting the array is \n");
    Display(arr,n);
    
    return 0;
}