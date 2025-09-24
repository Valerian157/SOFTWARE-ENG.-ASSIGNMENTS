/*
NAME:VALERIAN SARANGE OGARI
REG:PA106/G/28839/25
DESCRIPTION:CODE TO CALCULATE THE VOLUME AND SURFACE AREA OF A CYLINDER
*/


#include <stdio.h>
int main(){
	const double PI=3.142;
	float volume;
	float surface_area;
	int radius;
	int height;


	printf("enter the radius\n");
	scanf("%d", &radius);
	printf("enter the height\n");
	scanf("%d", &height);

	volume=PI*radius*radius*height;
	surface_area=2*PI*radius*radius+2*PI*radius*height;

	printf("volume is:%.2f\n", volume);
	printf("surface_area is:%.2f\n", surface_area);

	return 0;










}
