

int lengthOfLongestSubstring(char * s){
    if(!s) return 0;
    int start = 0,len = 0;
    int arr[255] = {0};
    int i = 0;
    while(s[i] != '\0')
    {
        if(arr[s[i]] == 0)
        {
            arr[s[i]] = 1;
            i++;
        }
        if(arr[s[i]] != 0)
        {
            len = (len < (i-start))?(i-start):len;
            for(int j = start;j<i;j++) arr[s[j]] = 0;
            start++;
            i = start;
        }
    }
    len = (i-start)>len?(i-start):len;
    return len;
}

int lengthOfLongestSubstring(char * s){
    int start = 0, end = 0, maxlen = 0;
    char map[256] = {0};
    map[(int)*(s+start)] = 1;
    
    while( *(s+end) != 0 )
    {
        maxlen = maxlen>(end-start+1)?maxlen:(end-start+1);
        ++end;
        while( 0 != map[ (int)*(s+end) ] )//将要加入的新元素与map内元素冲突
        {
            map[ (int)*(s+start) ] = 0;
               ++start;
        }
        map[(int)*(s+end)] = 1;
    }
    
    return maxlen;
}


