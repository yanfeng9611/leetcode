#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {  
    if(numsSize == 0){
        return 0;
    }
    int j = 0;
    int len = 1;
    for(int i = 1;i < numsSize;i++){
        if(nums[i] == nums[j]){
            continue;
        }
        else{
            j++;
            len++;
            nums[j] = nums[i];
        }
    }
    return len;
}

int main(){
	int nums[] = {0,0,1,1,1,2,2,3,3,4};
	int numsSize = 10;
	int len = 0;
	len = removeDuplicates(nums, numsSize);
	printf("%d",len);
	return 0;
} 
