#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char firstname[25];
        char lastname[25];
        int age;
        int noOfmatches;
        float average;
    }cricketer;

    // 3 cricketer 

    cricketer arr[4];
    for(int i=0;i<4;i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0;i<4;i++){
        printf("Name : %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age : %d\n",arr[i].age);
        printf("Number of maeches : %d\n",arr[i].noOfmatches);
        printf("Average runs : %f\n\n",arr[i].average);
    }
    
    return 0;
}
