# include<stdio.h>
# include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *arr = (int *)malloc(sizeof(int)*2);
    int temp = 0;
    for(int i = 0;i < numsSize - 1;i++){
        for(int j = i+1;j < numsSize;j++){
            if(nums[j] + nums[i] == target){
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return NULL;
}
int main(){
	int nums[] = {2, 7, 11, 15};
	int numsSize = 4;
	int target = 9;
	int *new_num = twoSum(nums, numsSize, target);
	for(int i = 0;i < 2;i++){
        printf("%d",new_num[i]);
	}
	return 0;
} 
