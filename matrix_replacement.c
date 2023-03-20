#include <stdio.h>

int main()
{
    printf("enter the size of matrix: ");
    int n;
    scanf("%d",&n);
    printf("enter the element to be replaced: ");
    int m;
    scanf("%d",&m);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    //replacement
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==m && i!=0)
                mat[i][j]=mat[i-1][j];
            else
                continue;
            }
        }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
