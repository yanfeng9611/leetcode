
// ����һ�� ����,�д������ظ����� 
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

//  ���ټ��������������������ͺ�Ȼ�󻮷�Ϊ�������֣����ÿ�μ���һ�������ұ�ÿ�μ�ȥһ���� 

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

 


