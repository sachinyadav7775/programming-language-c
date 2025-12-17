int main(){
    int n ;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int arr[3][3] = {{45,89,93},{48,110,90},{48,88,80}};
    int max = arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    
    printf("the number of max: %d\n",max);

    return 0;
}