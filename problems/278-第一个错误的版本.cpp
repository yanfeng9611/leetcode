#include<stdio.h> 
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);
bool isBadVersion(int n)
{
	if(n <= 0)
	{
		return false;
	}
	if(n >= 1) return true;
	return false;
}

// 整体思想为二分查找
// 当判断k为false时，继续判断k+1是否为true，否则更新k
// 当判断k为true时，继续判断k-1是否为false，否则更新k 
int firstBadVersion(int n) {
    if(n == 1) return 1;
    int k = n/2,low = 1,high = n;
    bool stage = false;
    while(true)
    {
        stage = isBadVersion(k);
        if(!stage)
        {
            if(isBadVersion(k+1)) return k+1;
            low = k;
            k = (high - low)/2 + low; // 刚开始写的是 (low + high)/2;  但是 (low+high)有可能会超出字长限制 
        }
        else 
        {   
            if(!isBadVersion(k-1)) return k;
            high = k;
            k = (high - low)/2 + low;
        }
    }
}
int main()
{
	int n = 2;
	int k = 0;
	k = firstBadVersion(n);
	printf("%d",k);
	return 0;
}
