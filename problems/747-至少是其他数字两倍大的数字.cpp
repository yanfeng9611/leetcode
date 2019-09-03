int dominantIndex(int* nums, int numsSize){
    if(numsSize == 1) return 0;
    int k = 0,temp = 0;
    if(nums[0] > nums[1]) {k = 0;temp = 1;}
    else {k = 1;temp = 0;}
    for(int i = 2;i < numsSize;i++)
    {
        if(nums[i] > nums[k])
        {
            temp = k;
            k = i; 
        }
        else if(nums[k] > nums[i] && nums[i] > nums[temp]) temp = i;
    }
    if(nums[k] >= 2*nums[temp]) return k;
    else return -1;
}
