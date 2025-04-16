#include <stdio.h>
struct Car {
    char brand[20];
    char model[20];
    int year;
    float price;
};
int main(){
    struct Car cars[3];
    for(int i=0;i<3;++i){
        printf("Enter details of car %d:\n",i+1);
        printf("Brand: ");
        scanf("%s",cars[i].brand);
        printf("Model: ");
        scanf("%s",cars[i].model);
        printf("Year: ");
        scanf("%d",&cars[i].year);
        printf("Price: ");
        scanf("%f",&cars[i].price);
        printf("\n");
    }
    for(int i=0;i<3;++i){
        printf("Car %d: \n",i+1);
        printf("Brand: %s\n",cars[i].brand);
        printf("Model: %s\n",cars[i].model);
        printf("Price: %.2f\n",cars[i].price);
    }
        printf("\n");
        return 0;
}

