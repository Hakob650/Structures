#include <stdio.h>
struct Student {
	char name[50];
	int age;
	float marks;
};
int main(){
	struct Student students[5];
	int i2=0;
	for(int i=0;i<5;++i){
		printf("\nStudent %d:\n",i+1);
		printf("Name: ");
		scanf("%s",students[i].name);
		printf("Age: ");
		scanf("%d",&students[i].age);
		printf("Marks: ");
		scanf("%f",&students[i].marks);
	}
	for(int i=1;i<5;++i){
		if(students[i].marks>students[i2].marks){
			i2=i;
		}
	}
	printf("\nStudent with the highest mark\n");
	printf("Name: %s\n",students[i2].name);
	printf("Age: %d\n",students[i2].age);
	printf("Mark: %.2f\n",students[i2].marks);
	return 0;
}



