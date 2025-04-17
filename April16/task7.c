#include <stdio.h>
union Value {
	int x;
	float y;
};
int main(){
	union Value val;

	printf("Enter an integer: ");
	scanf("%d",&val.x);
	printf("Integer Value: %d\n",val.x);
	
	printf("Enter a float: ");
	scanf("%f",&val.y);
	printf("Float Value: %f\n",val.y);

	printf("Size of union: %lu bytes(minimum size of the largest member).\n",sizeof(val));
	
	return 0;
}

