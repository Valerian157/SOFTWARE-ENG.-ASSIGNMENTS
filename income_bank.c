#include <stdio.h>
	int main(){
	
	int age;
	float income;
	
	printf("enter age\n");
	scanf("%d", &age);
	printf("enter income:sh\n");
	scanf("%f", &income);
	
	if(age >=21 && income >=21000){
		printf("comgratulations you qualify for a loan\n");
	}else{
		printf("unfortunately we are unable to offer you a loan at this time\n");
	}
	
	return 0; 
	
	
	
}