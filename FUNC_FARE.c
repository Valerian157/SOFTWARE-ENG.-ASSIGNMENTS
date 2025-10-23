/*
NAME:VALERIAN SARANGE OGARI
REG:PA106/G/28839/25
DESCRIPTION:FARE CALCULATION OF CUSTOMERS
*/

#include <stdio.h>
#include <stdlib.h>

int calculateFare(int distance_travelled);

int main()
{
    int distance;
    printf("Enter the distance traveled in km(kilometres): ");
    scanf("%d", &distance);

    int fare_spent = calculateFare(distance);

    printf("Your total fare is Ksh. %d", fare_spent);

    return 0;
}

int calculateFare(int distance_travelled){

    int transport = 50 * distance_travelled;
    return transport;

}
