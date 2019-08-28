# include<stdio.h>
# include<stdlib.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

	*returnSize = 0;  // 这一行一定要放在前面，否则当数组为空时，指针所指向的变量不能表示交集的大小 
    if(nums1Size == 0 || nums2Size == 0){
        return NULL;
    }
    int temp = 0;
//    对两个数组排序 
    for(int i = 0;i < nums1Size - 1;i++){
        for(int j = i+1;j < nums1Size;j++){
            if(nums1[i] > nums1[j]){
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
    for(int i = 0;i < nums2Size - 1;i++){
        for(int j = i + 1;j < nums2Size;j++){
            if(nums2[i] > nums2[j]){
                temp = nums2[i];
                nums2[i] = nums2[j];
                nums2[j] = temp;
            }
        }
    }
    int i = 0;
	int j = 0;
    
    int *new_num = (int *)malloc(sizeof(int)*nums2Size);
    
    while(i < nums1Size && j < nums2Size){
        if(nums1[i] < nums2[j]){
            i++;
        }
        else if(nums1[i] == nums2[j]){
            new_num[(*returnSize)++] = nums1[i];
            
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return new_num;
}
int main(){
	int nums1[] = {4,9,5};
	int nums1Size = 3;
	int nums2[] = {9,4,9,8,4};
	int nums2Size = 5;
	int a = 0;
	int *returnSize;
	returnSize = &a;
	int *new_num = intersect(nums1, nums1Size, nums2, nums2Size, returnSize);
	int i = 0;
	printf("%d\n",*returnSize);
	for(int i = 0;i < *returnSize;i++){
        printf("%d",new_num[i]);
	}
	return 0;
} 
