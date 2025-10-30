/*Valerian Sarange
PA106/G/28839/25
A hotel management system to manage room occupancy and revenue*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char *days[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	int i,revenue[7],sum=0,average;
	for(i=0;i<7;i++){
		
		printf("enter revenue for this day\n");
			printf("%s\n",days[i]);
		scanf("%d", &revenue[7]);
	sum =sum+revenue[7];
	}
	average=sum/7;
	printf("total revenue is %d\n",sum);
	printf("average is %d\n",average);
	
	int chain[3][5][10],occupancy[5][10];
	int f,r,b,total=0;
	srand(time(0));
	for(b=0;b<3;b++){
		printf("branch %d\n",b+1);
	for(f=0;f<5;f++){
		printf("\tfloor %d\n",f+1);
		for(r=0;r<10;r++){
			if(occupancy[5][10]=rand()%2){
				total=total+1;
				printf("\t\toccupied\n");
			}
			else
				{
					printf("\t\tvacant\n");
				}
			
		}
	}
	}
	printf("total rooms occupied %d",total);
	return 0;
}