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

    // 3 cricketer                                                        // [1]

    cricketer Arr[3];
    for(int i=0;i<3;i++){
        scanf("%s",Arr[i].firstname);
        scanf("%s",Arr[i].lastname);
        scanf("%d",&Arr[i].age);
        scanf("%d",&Arr[i].noOfmatches);
        scanf("%f",&Arr[i].average);
    }

    for(int i=0;i<3;i++){
        printf("Name : %s %s\n",Arr[i].firstname,Arr[i].lastname);
        printf("Age : %d\n",Arr[i].age);
        printf("Number of maeches : %d\n",Arr[i].noOfmatches);
        printf("Average runs : %f\n\n",Arr[i].average);
   } 
    
    typedef struct car{
        char name[30];
        char number[40];                                                    // [2]
        int speed ;
        float average;
        char tier;
    }car;

    car arr[3];

    // 3 car 

    arr[0].speed = 210;
    arr[0].average = 90.5;
    arr[0].tier = 'A';
    strcpy(arr[0].name,"Fortunr");
    strcpy(arr[0].number ,"IND UP 50 AK 7580");
    
    arr[1].speed = 340;
    arr[1].average = 288.5;
    arr[1].tier = 'B';
    strcpy(arr[1].name,"BMW");
    strcpy(arr[1].number ,"IND UP 50 BS 5400");
    
    arr[2].speed = 180;
    arr[2].average = 85.5;
    arr[2].tier = 'C';
    strcpy(arr[2].name,"Thar");
    strcpy(arr[2].number , "IND UP 50 MK 4801");

    for(int i=0;i<3;i++){
        printf("Car Name : %s\n",arr[i].name);
        printf("Number Plate : %s\n",arr[i].number);
        printf("tier : %c\n",arr[i].tier);
        printf("Speed : %d\n",arr[i].speed);
        printf("Average : %f\n\n",arr[i].average);
    }

    return 0;
    
}
