# include<stdio.h>
//void moveZeroes(int* nums, int numsSize) {
int* moveZeroes(int* nums, int numsSize) {
    if(numsSize == 0 || numsSize == 1){
        return nums;
    }
    int temp = 0;
    for(int i = 0;i < numsSize - 1; i++){
        if(nums[i] == 0){
            for(int j = i+1;j < numsSize;j++){
                if(nums[j] != 0){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    break;
                }
            }         
        }
    }
    return nums;
}
int main(){
	int nums[] = {0,1,0,3,4};
	int numsSize = 5;
	int *new_num = moveZeroes(nums, numsSize);
	for(int i = 0;i < numsSize;i++){
        printf("%d",new_num[i]);
	}
	return 0;
} 
