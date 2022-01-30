#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct PersonCar{
	char pName[30];
	char cModel[30];
	float price;
};
//Global variables
	struct PersonCar pc[4];//Unitialized data segment (BSS)
	int c=0;//Initalized data segment (DS)
	struct PersonCar *npc;//Unitialized data segment (BSS)


//Exercise 4
float calculatePrice(struct PersonCar *p, char *name){
	//continue here tommorrow 
}

int main(void){
	int i;
	do{
		printf("Enter a number of cars that is less or equal to 4:\n");
		scanf("%d", &c);
	}while(c>4);
	for(i=0; i<c; i++){
		printf("Enter the name of the car: \n");
		scanf("%s", pc[i].pName);
		printf("Enter the Model of the car: \n");
		scanf("%s", pc[i].cModel);
		printf("Enter the Price of the car: \n");
		scanf("%s", &pc[i].price);
	}
	return 0;
}
