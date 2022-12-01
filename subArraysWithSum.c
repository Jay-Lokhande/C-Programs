#include<stdio.h>

void printSubarray(int arr[], int size) {
    int sum;
    int totalSum = 0;
    for (int i = 0; i < size; i++)
    {
        int start = i;
        for (int j = i; j < size; j++)
        {
            int end = j;
            printf("[");
            for (int k = start; k <= end; k++)
            {
                printf("%d,", arr[k]);
                sum += arr[k];
            }
            printf("]");
            totalSum++;
            printf(" -> Sum: %d\n", sum);
            sum = 0;
            printf("\n");

        }
        printf("\n");
    }
    printf("Total Sub Arrays: %ld\n", totalSum);   
}
int main()
{
    int arr[] = {1, 2, 3 ,4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    printSubarray(arr, size);
    
    return 0;
}