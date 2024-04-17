#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    //N = rows, M = cols
    int N, M;
    int seed = 1234;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printf("Enter the number of columns: ");
    scanf("%d", &M);
    int **arr=(int **)malloc(N * sizeof(int *));
    for(int i = 0; i < rows; i++){
        arr[i] = (int*)malloc(M * sizeof(int));
    }
    srand(seed);
    int upperBound = 200;
    int lowerBound = 100;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = rand() % (upperBound - lowerBound + 1) + lowerBound;
        }
    }
    printf("Enter file name: ");
    char fileName[100];
    scanf("%s", fileName);
    FILE *fp = NULL;
    fp = fopen(fileName, "w");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fprintf(fp,"%c ",arr[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    free(fp);
}