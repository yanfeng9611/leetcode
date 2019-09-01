
// 因为数组是有序的，也知道数组的大小，所以从后向前遍历数组，每次找最大的书然后放在nums1的末尾 
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int t = m + n - 1;
    int i = m-1,j = n-1;
    while(i >= 0 && j >= 0)
    {
        if(nums1[i] < nums2[j]) nums1[t--] = nums2[j--];
        else nums1[t--] = nums1[i--];
    }
    if(i >= 0 && t >= 0)
    {
        while(i >= 0) nums1[t--] = nums1[i--];
            
    }
    if(j >= 0 && t >= 0)
    {
        while(j >= 0) nums1[t--] = nums2[j--];
    }
}


