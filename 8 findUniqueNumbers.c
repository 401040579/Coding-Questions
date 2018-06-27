#include <stdio.h>
#define MAX_INT 65535

//using C, if using Java/C#, I might using HashMap for better performance.
//for this method, idea is from bucket sort, and it should be O(n) time, but it has limit；

void findUniqueNumbers(int arr1[],int length1, int arr2[], int length2)
{
    int bucket[MAX_INT]={0};
    
    for(int i=0;i<length1;++i)
        bucket[arr1[i]]++;
    
    for(int i=0;i<length2;++i)
        bucket[arr2[i]]++;
    
    for(int i=0;i<MAX_INT;i++)
        if(bucket[i]==1)
            printf("%d ",i);
}

int main()
{
    int arr1[] = {1,2,5,3,4,5};
    int length1 = sizeof(arr1)/sizeof(int);
    int arr2[] = {2,3,1,2,6,0,5};
    int length2 = sizeof(arr2)/sizeof(int);
    findUniqueNumbers(arr1,length1,arr2,length2);
    return 0;
}
