#include <stdio.h>
void swap(int *x, int *y)
{
   int temp = *x;
    *x=*y;
    *y = temp;
}
void Display(int arr[], int n)
{
    printf("Elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ->",arr[i]);
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
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&arr[min], &arr[i]);
        }
    }
    printf("\nAfter sorting the array\n");
    Display(arr,n);

    return 0;
}
