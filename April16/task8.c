#include <stdio.h>
union Data {
	int x;
	float y;
	char z;
};
int main(){
	union Data data;
	data.x=10;
	printf("Assigning int value: %d\n",data.x);
	printf("int: %d,float:(garbage),char:(garbage)\n\n",data.x);

	data.y=12.5;
	printf("Assigning float value: %f\n",data.y);
	printf("int:(garbage),float: %f,char:(garbage)\n\n",data.y);

	data.z='A';
	printf("Assigning char value: %c\n",data.z);
	printf("int: (garbage),float:(garbage),char: %c\n\n",data.z);

	printf("Size of union: %lu bytes(largest member determines size)\n",sizeof(data));
       
	return 0;
}	



