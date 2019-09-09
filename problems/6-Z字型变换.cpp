
char * convert(char * s, int numRows){
    int len = 0;
    len = strlen(s);
    if(numRows == 1 || len <= numRows) return s;
    char *arr[len+1];
    int temp = 2*(numRows-1);
    int t = 0;
    for(int i = 0;i < numRows;i++)
    {
        int j = i;
        int tag = 2*i;
        while(j < len)
        {
            arr[t++] = s[j];
            tag = temp-tag;
            j += (i == 0 || i ==  numRows-1)?temp:tag;
        }
    }
    arr[len] = '\0';
    return arr;
}

	string convert(string s, int numRows) {
		if (numRows == 1) return s;

		int step = numRows * 2 - 2; // ??
		int index = 0;// ??s???
		int len = s.length();
		int add = 0; // ?????
		string ret;
		for (int i = 0; i < numRows; i++) // i????
		{
			index = i;
			add = i * 2;
			while (index < len)//????????????
			{
				ret += s[index]; // ?????????
				add = step - add;// ??????step -2*i,????2*i, 
				index += (i == 0 || i == numRows-1) ? step : add; // 0????????step??,????add??
			}
		}
		return ret;
	}


