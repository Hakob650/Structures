#include <stdio.h>
struct Car {
    char brand[20];
    char model[20];
    int year;
    float price;
};
void FindAndPrint(struct Car cars[],int size){
    int i1=0;
    int i2=0;
    for(int i=1;i<size;++i){ 
        if(cars[i].price<cars[i1].price){
                    i1=i;
        }
        if(cars[i].year>cars[i2].year){
                    i2=i;
        }
    }
        printf("\nCar with lowest price\n");
        printf("Brand: %s\n",cars[i1].brand);
        printf("Model: %s\n",cars[i1].model);
        printf("Year: %d\n",cars[i1].year);
        printf("Price: %.2f\n",cars[i1].price);

        printf("\nCar with latest year:\n");
        printf("Brand: %s\n", cars[i2].brand);
        printf("Model: %s\n", cars[i2].model);
        printf("Year: %d\n", cars[i2].year);
        printf("Price: %.2f\n", cars[i2].price);
}int main(){
    struct Car cars[3];
    for(int i=0;i<3;++i){
        printf("Enter details for car %d:\n",i+1);
        printf("Brand: ");
        scanf("%s",cars[i].brand);
        printf("Model: ");
        scanf("%s",cars[i].model);
        printf("Year: ");
        scanf("%d",&cars[i].year);
        printf("Price: ");
        scanf("%f",&cars[i].price);
    }FindAndPrint(cars,3);
    return 0;
}
