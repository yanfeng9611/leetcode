# include<stdio.h>
int singleNumber(int* nums, int numsSize) {
    if(numsSize == 1){
        return nums[0];     
    }
    int num = nums[0];
    for(int i = 1;i < numsSize;i++){
        num = num^nums[i];         
    }
    return num;
}
int main(){
	int nums[] = {4,1,2,1,2};
	int numsSize = 5;
	int num = 0; 
	num = singleNumber(nums, numsSize);
	printf("%d",num);
	return 0;
} 
