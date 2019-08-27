#include<stdio.h>
#include<math.h>
#define Max 2147483647
#define Min (-Max-1)
int reverse(int x){
    if( x >0 && x < 10 ||x  < 0 && x > -10)
    {
    	printf("%d",x);
        return x;
    }
    int temp = 0;
    if(x < 0)
    {
        temp = 1;
        x *= -1;
    }
    int y = 0;
    long int z = 0;
    while(1)
    {
        if(x<10)
        {
            z += x;
            break;
        }
        y = x%10;
        x = x/10;
        if(z==0 && y == 0)
        {
            continue;
        }
        z += y;
    	printf("y:%d  x:%d   z:%ld\n",y,x,z);
        if(z > Max/10)
		{
			return 0;
		 } 
        z *= 10;
    }
    if(temp == 1)
    {
        z *= -1;
        if(z > pow(2,10)- 1)
        
        {
            return 0;
        }
        
    }
    printf("%d",z);
    return z;
    
}

int main()
{
	int x = 1534236469;
	reverse(x);
}
