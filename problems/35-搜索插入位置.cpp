

int searchInsert(int* nums, int numsSize, int target){
    if(nums == NULL) return 0;
    int i = 0;
    for(i = 0;i < numsSize;i++)
    {
        if(nums[i] >= target) return i;   
    }
    return i;
}


