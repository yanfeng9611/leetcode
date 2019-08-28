# include<stdio.h>
bool containsDuplicate(int* nums, int numsSize) {
    if(numsSize == 0 || numsSize == 1){
        return false;
    }
    for(int i = 0;i < numsSize-1;i++){
        for(int j = i + 1;j < numsSize;j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
	int nums[] = {1,1,1,3,3,4,3,2,4,2};
	int numsSize = 10;
	bool state = false;
	state = containsDuplicate(nums, numsSize);
	printf("%d",state);
	return 0;
} 
