# include<stdio.h>
bool isPalindrome(char * s){
    int len = 0;
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if(s[i] < '0' || s[i] > '9' && s[i] < 'a' ||  s[i] >'z')
        {
            i++;
        }
        else
        {
            s[len++] = s[i++];
        }
    }
    int j = len-1;
    for (i = 0;i <j;i++,j--)
    {
        if(s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}

int main(){
	char s[] = "A man, a plan, a canal: Panama";
	int new_num = isPalindrome(s);
    printf("%d",new_num);
	return 0;
} 
