# include<stdio.h>
int firstUniqChar(char * s){
    if(s[0] == '\0')
    {
        return -1;
    }
    else if(s[1] == '\0')
    {
        return 0;
    }
    int tag = -2;
    for(int i = 0;s[i] != '\0';i++)
    {
        for(int j = 0;s[j] != '\0';j++)
        {
            if(i == j)
            {
                continue;
            }
            else if(s[i] == s[j])
            {
                tag = 0;
                break;
            }
        }
        if(tag == 0)
        {
            tag = -2;
            continue;
        }
        else
        {
            return i;
        }
    }
    return -1;
}

int main(){
	char s[] = "loveleetcode";
	int new_num = firstUniqChar(s);
    printf("%d",new_num);
	return 0;
} 
