#include<stdio.h>
#include<stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char *sstr = (char *)malloc(128);
    memset(sstr,'\0',128);
    if(strs == NULL || strsSize == 0)
        return sstr;
    int tag = 0;
    for(int i = 0;strs[0][i] != '\0';i++)
    {
        for(int j = 1;j < strsSize;j++)
        {
            if(strs[0][i] != strs[j][i])
            {
                tag = 1;
                break;
            }
        }
        if(tag == 1)
        {
            break;
        }
        else
        {
            sstr[i] = strs[0][i];
        }
    }
    return sstr;
}

int main()
{
	int strsSize = 3;
	char strs[3][10] = {"flower","flow","flight"};
	longestCommonPrefix(strs,strsSize);
	return 0;
	

}
