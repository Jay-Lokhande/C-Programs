#include<stdio.h>
#include<limits.h>
#include <stdlib.h>

void kadanes(int arr[], int size) {
    int ms = INT_MIN;
    int cs = 0;

    for (int i = 0; i < size; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = (cs > ms) ? cs : ms;
    }
    printf("%d\n", ms);
    
}
int main()
{
    int arr[] = {1, -2, 8, -5, 9, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    kadanes(arr, size);
    return 0;
}