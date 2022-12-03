#include<stdio.h>
#include<limits.h>
// Jay-Lokhande 😎

void maxSubarraySum(int arr[], int size) {

    int currSum = 0;
    int maxSum = INT_MIN;
    int prefix[size];

    int prefixSize = sizeof(prefix)/sizeof(prefix[0]);

    prefix[0] = arr[0];

    for (int i = 1; i < prefixSize ; i++)
    {
        prefix[i] = prefix[i-1] + arr[i]; 
    }
     
    for (int i = 0; i < size; i++)
    {
        int start = i;
        for (int j = i; j < size; j++)
        {
            int end = j;
            currSum = 0;
           
            currSum = start == 0? prefix[end] : prefix[end] - prefix[start - 1];
            printf("%d", currSum);
            printf("\n");
            if (maxSum < currSum) 
            {
                maxSum = currSum;
            }
       }    
    }
    printf("max sum = %d", maxSum);
}
int main() {

    int arr[] = {1, -2, 8, -5, 9, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    maxSubarraySum(arr, size);
    return 0;
}