# include<stdio.h>

#define Max 2147483647
#define Min (-Max-1)
int myAtoi(char * str){
    int temp = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ' ')
        {
            continue;
        }
        else if(str[i] == '-' && str[i+1] >= '0' && str[i+1] <= '9')
        {
            temp = -1;
            break;
        }
        else if(str[i] == '+' && str[i+1] >= '0' && str[i+1] <= '9' || str[i] >= '0' && str[i] <= '9')
        {
            temp = 1;
            break;
        }
        else
        {
            return 0;
        }
    }
    if(temp == 0)
    {
        return 0;
    }
    int num = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            continue;
        }
        else
        {
            if(num >= 0)
            {
                num += (str[i] - '0')*temp;
            }
            else
            {
                num -= str[i] - '0';
            }
        }
        if(str[i+1] >= '0' && str[i+1] <= '9')
        {
            if(num > Max/10 || num == Max/10 && str[i+1]-'0' > 7)
            {
                return Max;
            }
            else if(num < Min/10 || num == Min/10 && str[i+1]-'0' > 8)
            {
                return Min;
            }
            else
            {
                num *= 10;
            }
        }
        else
        {
            break;
        }
    }
    return num;
}

int main(){
	char s[] = "   -42";
	int new_num = myAtoi(s);
    printf("%d",new_num);
	return 0;
} 
