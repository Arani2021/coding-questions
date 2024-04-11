#include<stdio.h>
int main(){
    //1st matrice order
    int m;
    printf("Enter the no of the rows 1st matrix:");
    scanf("%d",&m);
    int n;
    printf("Enter the no of the colums 1st matrix:");
    scanf("%d",&n);
    
    int a[m][n];
    //input the 1st  matrix
     printf("Enter the no of the rows 1st matrix:");
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[m][n]);
        }
     }
    //2nd matrix order
     int p;
    printf("Enter the no of the rows of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("Enter the no of the colums of 2nd matrix:");
    scanf("%d",&q);
    int b[p][q];
    //input 2nd matrix
    printf("Enter the no of the rows 2nd matrix:");
    for(int i =0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[p][q]);
        }
    }
    //check
    if (n!=p)
    {
        printf("the matrix cannot be multiplied ");
    }
    else{
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //i row of a, j column of b
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
        }
    }
    for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
               printf("%d ",res[i][j]);
        }
        printf("\n");
    }
       
}
    return 0;
}