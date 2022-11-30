#include<stdio.h>

void printPairs(int arr[], int size) {
    int pairs;
    for(int i = 0; i < size; i++){
        int curr = arr[i];
        for (int j = i+1; j < size; j++)
        {
            printf("(%d,%d) ", curr, arr[j]);
            pairs++;
        }
        printf("\n");
    }
    printf("Total no. of pairs: %d", pairs);
}
int main()
{
    // example array
    int arr[] = {2, 3, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    printPairs(arr, size);

    return 0;
}