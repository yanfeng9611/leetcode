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

// ����˼��Ϊ���ֲ���
// ���ж�kΪfalseʱ�������ж�k+1�Ƿ�Ϊtrue���������k
// ���ж�kΪtrueʱ�������ж�k-1�Ƿ�Ϊfalse���������k 
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
            k = (high - low)/2 + low; // �տ�ʼд���� (low + high)/2;  ���� (low+high)�п��ܻᳬ���ֳ����� 
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
