#include <stdio.h>
enum Categories {
        ELECTRONICS,
        FOOD,
        CLOTHING,
};
struct Product {
        char name[20];
        enum Categories category;
        float price;
};
int main(){
        struct Product products[3];
        for(int i=0;i<3;++i){
                int input;
                printf("\nEnter details for product %d:\n",i+1);
                printf("Name: ");
                scanf("%s",products[i].name);
                printf("Category(0: ELECTRONICS,1: FOOD,2: CLOTHING");
                scanf("%d",&input);
                products[i].category=(enum Categories)input;
                printf("Price: ");
                scanf("%f",&products[i].price);
 }
                printf("\nProducts of FOOD category:\n");
        	for(int i=0;i<3;++i){
                if(products[i].category==FOOD){
                        printf("Name: %s\n",products[i].name);
                        printf("Price: %.2f\n",products[i].price);
                }
        }return 0;
}



