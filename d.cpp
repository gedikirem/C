#include <stdio.h>



void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
//    printf("\n");
}

void len(int arr[],int size)
{
	 
printArr(arr, 5);
    printf("%d ", sizeof(arr));
  
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d ", sizeof(arr));
    printArr(arr, 5);
  len(arr,5);

}
