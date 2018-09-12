#include<stdio.h>
#include<conio.h>
struct flight{
	int number;
	char airline_name[50];
	char destination[50];
	char source[50];
	char dep_date_time[50];
	char arr_date_time[50];
	float price;
};

void searchdest(){

}
int main(){
	struct flight *ptr;
	int i, records_num;
	ptr=(struct flight*)malloc(records_num*sizeof(struct flight));
	for(i=0;i<records_num;i++){
		printf("enter the details of flight %d\n", i+1);
		printf("enter the flight number: ");
		scanf("%d\n",&(ptr+i)->number);
		printf("enter the airline name: ");
		scanf("%s\n",&(ptr+i)->airline_name);
		printf("enter the destination: ");
		scanf("%s\n",&(ptr+i)->destination);
		printf("enter the source: ");
		scanf("%s\n",&(ptr+i)->source);
		printf("enter deparature date and time: ");
		scanf("%s\n",&(ptr+i)->dep_date_time);
		printf("enter arrivale data and time: ");
		scanf("%s\n", &(ptr+i)->arr_date_time);
		printf("enter price: ");
		scanf("%f\n", &(ptr+i)->price);
	}

	printf("flights\n");
	printf("   number      name     destination    source     dep_date_time     arr_date_time    price\n");

	for(i=0;i<records_num;i++){
	  printf("%9d\t%9s\t%9s\t%9s\t%9s\t%9s\t%9f\n",(ptr+i)->number, (ptr+i)->airline_name, (ptr+i)->destination, (ptr+i)->source, (ptr+i)->dep_date_time, (ptr+i)->arr_date_time, (ptr+i)->price);)
	  }
       char c;
       int ch;
       do{
	printf("enter users choice:\n");
	printf("1 for destination, 2 for departure date, 3 for arrival date: ");
	scanf("%d\n",&ch);

	switch:{
		case 1:
			char dest[50];
			printf("enter destination: ");
			scanf("%s\n", &dest);
			for(int i=0;i<records_num;i++){
				if(strcmp(dest,(ptr+i)->destination))
				     printf("%d\n", (ptr+i)->number);
			}

		 case 2:
			char src[50];
			printf("enter source: ");
			scanf("%s\n",&src);
			for(int i=)

	}
       }

}








