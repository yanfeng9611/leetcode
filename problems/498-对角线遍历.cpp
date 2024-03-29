/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDiagonalOrder(int** matrix, int matrixRowSize, int matrixColSize, int* returnSize) {
    
    if(!matrix) return matrix;
    
    // total diagonal number
    int dia = matrixRowSize + matrixColSize - 1;
    
    // allocate return array
    int* ret = (int *)malloc(sizeof(int) * matrixRowSize * matrixColSize);
    *returnSize = matrixRowSize * matrixColSize;
    int count = 0;
    
    // index for tracking the start point
    int start;
    
    // two direction base one odd or even of the diagonal number
    for(int d = 0; d <= dia; d++){
        
        // even direction, start from the d-th (d < matrixRowSize-1) row, when reach to the end row, start from end row
        // and decreasing row and increasing col until one of these reach to the boundary
        if(d % 2 == 0){
            start = d;
            if(start > matrixRowSize - 1) start = matrixRowSize - 1;
            
            for(int r = start; (r >= 0) && (d-r < matrixColSize); r--){
                ret[count++] = matrix[r][d-r];
            }
 
        }
        // odd direction, start from the d-th (d < matrixColSize-1) col, when reach to the end col, start from end col
        // and decreasing col and increasing row until one of these reach to the boundary
        else{
            start = d;
            if(start > matrixColSize - 1) start = matrixColSize - 1;
            
            for(int c = start; (c >= 0) && (d-c < matrixRowSize); c--){
                ret[count++] = matrix[d-c][c];
            }
        }
    }
    
    return ret;
}
