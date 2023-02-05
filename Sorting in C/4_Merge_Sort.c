#include <stdio.h>
void Display(int arr[], int n)
{
int i;
    printf("Elements are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void Merge(int arr[], int lb, int mid, int ub)
{
    int i = lb,b[20];
    int j = mid+1; //
    int k=lb;
    while (i<=mid /**/ && j<=ub){
        if(arr[i]<=arr[j]){
            b[k++]=arr[i++];
        }
        else{
            b[k++]=arr[j++];
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k++]=arr[j++];
        }

    }
    else{
         while(i<=mid){
            b[k++]=arr[i++];
        }
    }
    for(k=0;k<ub+1;k++){
        arr[k]=b[k];
    }
}

void Merge_Sort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        Merge_Sort(arr,lb,mid);
        Merge_Sort(arr,mid + 1,ub);
        Merge(arr,lb,mid,ub);
    }
}
int main()
{
    int arr[20],i;
    int lb = 0, ub, n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    ub = n - 1;
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]); //remove space after access specifier
    }
    printf("Before sorting the array\n");
    Display(arr, n);
    Merge_Sort(arr, lb, ub);
    printf("After sorting the array\n");
    Display(arr, n);

    return 0;
}
