/*
NAME:VALERIAN SARANGE
REG:PA106/25/28839/25
DESCRIPTION:CODE TO PROMPT THE USER TO ENTER RELEVANT DATA
*/

#include <stdio.h>

int main(){


double BANK_BALANCE;
int ID;
int HEIGHT;

//prompt to the user to enter relevant data
printf("Enter your ID\n");
scanf("%d", &ID);

printf("Enter your HEIGHT\n");
scanf("%d", &HEIGHT);

printf("Enter your BANK BALANCE\n");
scanf("%lf", &BANK_BALANCE);


    printf("\nYou entered the following data:\n");
    printf("\nID : %d\n", ID);
    printf("HEIGHT : %d cm\n", HEIGHT);
    printf("BANK BALANCE : ksh%.2lf\n", BANK_BALANCE);


return 0;
}

