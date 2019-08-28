# include<stdio.h>
//void rotate(int* nums, int numsSize, int k) {
int* rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if(k == 0 || numsSize == 1 || numsSize == 0){
        return nums;
    }
    if(numsSize == 2){
        int temp= 0;
        temp = nums[0];
        nums[0] = nums[1];
        nums[1] = temp;

        return nums;
    }
    int temp = 0,tag = nums[0];
    int p = 0,q = k;
    for(int i = 0;i < numsSize;i++){
        temp = nums[q];
        nums[q] = tag;
        tag = temp;
        q = (q + k)%numsSize;    
        if(numsSize % 2 == 0 && (i+1) * k % numsSize == 0){
            q = (q + numsSize - k + 1) % numsSize;
            tag = nums[q];
            q = (q + k) % numsSize;
        }
    }
    return nums;
}
int main(){
	int nums[] = {1,2,3,4,5,6,7};
	int numsSize = 7;
	int k = 3; 
	int *num = rotate(nums, numsSize, k);
	for(int i = 0;num[i] != '\0';i++){
		printf("%d",num[i]);
	}
	return 0;	
} 
