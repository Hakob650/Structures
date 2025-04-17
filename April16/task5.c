#include <stdio.h>
struct Car {
	    char brand[20];
	    char model[20];
	    int year;
            float price;
};
struct Car compareCars(struct Car car1,struct Car car2){
	if(car1.price>car2.price){
		return car1;
	}else{
		return car2;
	}
}
int main(){
	struct Car car1,car2,result;
	printf("\nEnter details for Car1\n");
	printf("Brand: ");
	scanf("%s",car1.brand);
	printf("Model: ");
	scanf("%s",car1.model);
	printf("Year: ");
	scanf("%d",&car1.year);
	printf("Price: ");
	scanf("%f",&car1.price);

	printf("\nEnter details for car2\n");
	printf("Brand: ");
	scanf("%s",car2.brand);
	printf("Model: ");
	scanf("%s",car2.model);
	printf("Year: ");
	scanf("%d",&car2.year);
	printf("Price: ");
	scanf("%f",&car2.price);
	
	result=compareCars(car1,car2);

	printf("\nCar with the highest price\n");
	printf("Brand: %s\n",result.brand);
	printf("Model: %s\n",result.model);
	printf("Year: %d\n",result.year);
	printf("Price: %.2f\n",result.price);

	return 0;
}
