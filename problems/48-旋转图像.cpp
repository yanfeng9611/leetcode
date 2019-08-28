void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {
    int temp = 0;
    for(int i = 0,j = matrixRowSize - 1;i < matrixRowSize/2;i++,j--){
        for(int tag = 0;tag < matrixRowSize;tag++){
            temp = *(*(matrix + i) + tag);
            *(*(matrix + i) + tag) = *(*(matrix + j) + tag);
            *(*(matrix + j) + tag) = temp;
        }
    }
    for(int i = 0;i < matrixRowSize;i++){
        for(int j = i;j < matrixRowSize;j++){
            temp = *(*(matrix + i) + j);
            *(*(matrix + i) + j) = *(*(matrix + j) + i);
            *(*(matrix + j) + i) = temp;
        }
    }
     return matrix;
}
