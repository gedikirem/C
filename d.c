#include <stdio.h>
int len(int arr[])
{
	
    printf("%d ", sizeof(arr));
   printArr(arr, 5);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
   // printf("%d ", sizeof(arr));
    //printArr(arr, 5);
    len(arr);
}
