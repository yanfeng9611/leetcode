# include<stdio.h>
int strStr(char * haystack, char * needle){
    if(needle[0] == '\0')
    {
        return 0;
    }
    else if(haystack[0] == '\0')
    {
        return -1;
    }
    int len1 = 0;
    int len2 = 0;
    while(haystack[len1] != '\0')
    {
        len1++;
    }
    while(needle[len2] != '\0')
    {
        len2++;
    }
    int tag = 0;
    int j = 0;
    int i = 0;
    while(i <= len1 - len2)
    {
        tag = i;
        while(needle[j] != '\0')
        {
            if(haystack[tag] == needle[j])
            {
                tag++;
                j++;
            }
            else
            {
                i++;
                j = 0;
                break;
            }
        }
        if(needle[j] == '\0')
        {
            return i;
        }
    }
    return -1;
}
int main(){
	char s[] = "hello";
	char t[] = "ll";
	int new_num = strStr(s, t);
    printf("%d",new_num);
	return 0;
} 
