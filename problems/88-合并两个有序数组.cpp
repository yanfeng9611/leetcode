
// ��Ϊ����������ģ�Ҳ֪������Ĵ�С�����ԴӺ���ǰ�������飬ÿ����������Ȼ�����nums1��ĩβ 
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


