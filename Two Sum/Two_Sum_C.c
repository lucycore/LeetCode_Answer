#include <stdlib.h>
#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target);

int main(void){
    int nums[4] = {2,7,11,15};
    int *p = twoSum(nums,4,9);
    printf("%d,%d",p[0],p[1]);
    free(p);
}

int* twoSum(int* nums, int numsSize, int target){
    static int * result;
    result = (int*)malloc(2*sizeof(int));
    for(int i1=0; i1<numsSize-1 ; i1++){
        for(int i2=i1+1; i2<numsSize ; i2++){
            if ((nums[i1]+nums[i2])==target){
                result[0] = i1;
                result[1] = i2;
            }
        }
    }
    return result;
}

