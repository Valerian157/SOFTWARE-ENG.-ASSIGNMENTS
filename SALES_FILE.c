/*Valerian Sarange
PA106/G/28839/25
A program on sales file*/

#include<stdio.h>

int main(){
	
	FILE *fptr;
	float amount;
	float total = 0.0;
	
	fptr=fopen("sales.txt", "r");
	
	if(fptr == NULL){
		printf("error opening file!\n");
		return 1;
	}
	
	while(fscanf(fptr, "%f", &amount)!=EOF){
		total += amount;
	}
	
	printf("total sales for the day:%.2f\n", total);
	
	fclose(fptr);
	printf("file closed successfully\n");
	
	return 0;
}