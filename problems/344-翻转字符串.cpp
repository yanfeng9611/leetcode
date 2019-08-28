# include<stdio.h>
char* reverseString(char* s, int sSize){
    if(sSize == 1 || sSize == 0)
        return s;
    char temp;
    for(int i =0;i < sSize/2;i++)
    {
        temp = s[i];
        s[i] = s[sSize-1-i];
        s[sSize-1-i] = temp;
    }
    return s;
}

int main(){
	char s[] = {'H','a','n','n','a','h'};
	int sSize = 6;
	char *new_num = reverseString(s, sSize);
	for(int i = 0;i < sSize;i++){
        printf("%c",new_num[i]);
	}
	return 0;
} 
