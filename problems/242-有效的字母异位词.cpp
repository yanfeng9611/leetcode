# include<stdio.h>
bool isAnagram(char * s, char * t){
    int str1[26] = {0};
    int str2[26] = {0};
    for(int i = 0;s[i] != '\0';i++)
    {
        str1[s[i] - 'a'] += 1;
        
    }
    for(int i = 0;t[i] != '\0';i++)
    {
        str2[t[i] - 'a'] += 1;
    }
    for(int i = 0;i < 26;i++)
    {
        if(str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

int main(){
	char s[] = "rat";
	char t[] = "car";
	int sSize = 6;
	int new_num = isAnagram(s, t);
    printf("%d",new_num);
	return 0;
} 
