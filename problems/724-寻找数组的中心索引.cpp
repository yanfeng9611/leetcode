
// 方法一： 暴力,有大量的重复计算 
int pivotIndex(int* nums, int numsSize){
    
    for(int k = 0;k < numsSize;k++)
    {
        int num1 =0,num2 = 0;
        int i = 0,j = numsSize - 1;
        while(i < k) num1 += nums[i++];
        while(j > k) num2 += nums[j--];
        if(num1 == num2) return k;
    }
    return -1;
}

//  减少计算次数，对整个数组求和后，然后划分为两个部分，左边每次加上一个数，右边每次减去一个数 

int pivotIndex(int* nums, int numsSize){
    if(numsSize == 0) return -1;
    int sum = 0;
    for(int i = 0;i < numsSize;i++) sum += nums[i];
    int left = 0,right = sum ;
    for(int k = 0;k < numsSize;k++)
    {
        right -= nums[k];
        if(left == right) return k;
        left += nums[k];
    }
    return -1;
}

 


