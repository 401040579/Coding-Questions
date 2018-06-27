#include <stdio.h>
void findMinMax(int nums[], int length)
{
    int min = nums[0], max = nums[0];
    
    for(int i = 0;i<length;i++)
    {
        if(min > nums[i])
        {
            min = nums[i];
        }
        
        if(max < nums[i])
        {
            max = nums[i];
        }
    }
    printf("min = %d, max = %d", min, max);
}

int main()
{
    int nums[] = {1,3,11,10,9,6,-4,2};
    int length = sizeof(nums)/sizeof(int);
    findMinMax(nums,length);
    return 0;
}
