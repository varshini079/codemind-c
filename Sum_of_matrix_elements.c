#include<stdio.h>

int main(){
    
    int row,col,sum,i,j;
    
    scanf("%d%d",&row,&col);
    
    int arr[row][col];
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}