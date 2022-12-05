#include<stdio.h>
int trappedRainwater(int height[], int size) {
    int leftMax[size];
    leftMax[0] = height[0];
    for (int i = 1; i < size; i++)
    {
        leftMax[0] = (height[i] > leftMax[i-1]) ? height[i]:leftMax[i-1];
    }
    int rightMax[size];
    rightMax[size-1] = height[size-1];
    for (int i = size-2; i >= 0; i--)
    {
        rightMax[i] = (height[i] > rightMax[i+1]) ? height[i] : rightMax[i+1];
    }

    int trappedWater = 0;

    for (int i = 0; i < size; i++)
    {
        int waterLavel = (leftMax[i] > rightMax[i]) ? rightMax[i] : leftMax[i];
        trappedWater += waterLavel - height[i];
    }
    return trappedWater;
    
    
}
int main()
{
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int size = sizeof(height)/sizeof(height[0]);
    printf("%d",trappedRainwater(height, size));
    return 0;
}