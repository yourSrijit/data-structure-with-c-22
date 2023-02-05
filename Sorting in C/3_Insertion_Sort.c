#include <stdio.h>
void Display(int arr[], int n)
{
    printf("Elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        while (i!=n-1)
        {
            break;
        }
        printf(" -> ");
    }
}
int main()
{
    int arr[20], n;
    printf("Enter numbers of elements\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting the array\n");
    Display(arr,n);
    for (int i = 1; i < n; i++)
    {   int temp =arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>temp)
        {
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=temp;
    }
    printf("\nAfter sorting the array\n");
    Display(arr,n);

    return 0;
}
