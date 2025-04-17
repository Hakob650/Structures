#include <stdio.h>
struct Book {
	char title[50];
	char author[30];
	int year;
};
int main(){
	struct Book books[4];
	int oldest=0;
	for(int i=0;i<4;++i){
		printf("\nEnter details of Book\n");
		printf("Title: ");
		scanf("%s",books[i].title);
		printf("Author: ");
		scanf("%s",books[i].author);
		printf("Year: ");
		scanf("%d",&books[i].year);
	}
	for(int i=1;i<4;++i){
		if(books[i].year<books[oldest].year){
			oldest=i;
		}
	}
	printf("\nOldest Book:\n");
	printf("Title: %s\n",books[oldest].title);
	printf("Author: %s\n",books[oldest].author);
	printf("Year: %d\n",books[oldest].year);
	return 0;
}


