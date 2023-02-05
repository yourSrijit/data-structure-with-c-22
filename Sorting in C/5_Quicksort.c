#include <stdio.h>
void swap(int *x, int *y)
{
    int temp =*x;
    *x =*y;
    *y = temp;
}
void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int Partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
             swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
}
void Quick_sort(int arr[],int lb,int ub){
    if(lb<ub){
        int position =Partition(arr,lb,ub);
        Quick_sort(arr,lb,position-1); 
        Quick_sort(arr,position+1,ub); 

    }
}
int main()
{
    int n, arr[50];
    printf("\nEnter the number of elements\n");
    scanf("%d", &n);
    int lb = 0, ub = n - 1;
    printf("\nEnter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray befor soritng\n");
    Display(arr, n);
    Quick_sort(arr,lb,ub);
    printf("\nAfter sorting the array is\n");
    Display(arr,n);

    return 0;
}