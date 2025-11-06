#include<stdio.h>

	struct student{
		char name[100];
		int registration_number;
		float total_marks;
	};

int main(){
	FILE *fptr;
	struct student st;
	int i, n;
	
	fptr = fopen("results.dat", "wb");
	if(fptr == NULL){
		printf("error creating the file!\n");
		
		return 1;
	}
	
	printf("enter the number of students\n");
	scanf("%d", &n);
	getchar();
	
	for(i=0; i<n; i++){
		printf("enter name\n");
		fgets(st.name, sizeof(st.name),stdin);
		
		printf("enter registraion number\n");
		scanf("%d", &st.registration_number);
		
		printf("enter total_marks\n");
		scanf("%f", &st.total_marks);
		getchar();
		
		fwrite(&st, sizeof(struct student), 1, fptr);
		
	}
	
	fclose(fptr);
	printf("data successfully saved to results.dat\n");
	
	return 0;
	
}		
	