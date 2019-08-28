# include<stdio.h>
# include<stdlib.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for(int i = digitsSize - 1;i >= 0;i--){
        if(digits[i] == 9){
            digits[i] = 0;
        }
        else{
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
    }
    int *new_data =(int*)malloc(sizeof(int)*(digitsSize + 1));
    new_data[0] = 1;
    for(int i = 0;i < digitsSize;){
        new_data[++i] = 0;
    }
    *returnSize = digitsSize + 1;
    return new_data;
}
int main(){
	int digits[] = {4,3,2,1};
	int digitsSize = 4;
	int a = 0;
	int *returnSize;
	returnSize = &a;
	int *new_num = plusOne(digits, digitsSize, returnSize);
	printf("%d\n",*returnSize);
	for(int i = 0;i < *returnSize;i++){
        printf("%d",new_num[i]);
	}
	return 0;
} 
