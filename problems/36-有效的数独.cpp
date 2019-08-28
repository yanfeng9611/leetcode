bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    char str[10] = {0};
    for(int i = 0;i < boardRowSize;i++){
        for(int j = 0;j < boardRowSize - 1;j++ ){
            for(int t = j+1;t < boardRowSize;t++){
                if(*(*(board + i) + t) != '.' && *(*(board + i) + j) == *(*(board + i) + t)){
                    return false;
                }
            }
        }      
    }
    for(int i = 0;i < boardRowSize;i++){
        for(int j = 0;j < boardRowSize - 1;j++){
            for(int t = j+1;t < boardRowSize;t++){
                if(*(*(board + t) + i) != '.' && *(*(board + j) + i) == *(*(board + t) + i)){
                    return false;
                }
            }
        }
    }
    
    for(int i = 0;i < 9;i = i + 3){
        for(int j = 0;j < 9;j = j + 3){
            memset(str,0,sizeof(str));
            int len = 0;
            for(int p = i;p < i+3;p++){
                for(int q = j;q < j+3;q++){
                    for(int t = 0;t < len;t++){
                       if(*(*(board + p) + q) != '.' && str[t] == *(*(board + p) + q)) {
                           return false;
                       }
                    }
                    str[len++] = *(*(board + p) + q);                 
                }
            }         
        }
    }
    return true;
}
