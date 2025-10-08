/*
NAME:VALERIAN SARANGE OGARI
REG:PA106/G/28839/25
DESCRIPTION:SYSTEM PASSWORD CHECKER
*/

#include <stdio.h>

int main(){

int password = 1234;
int passcode;

do{

    printf("Enter the password: ");
    scanf("%d", &passcode);
}while(password != passcode);
printf("Access Granted");

return 0;
}
