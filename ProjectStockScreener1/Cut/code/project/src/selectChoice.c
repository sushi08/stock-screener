/*This file contains selectChoice() func which shows list of stocks 
takes input from user and set the file pointer  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>
#include <struct.h>


void selectChoice(FILE** fptr){
    while(1){
    system("clear"); 
    fflush(stdin);
    char choice[(int)RANGE2];

    printf("\nList of Stocks\n\n1. AJANTA PHARMA\n2. BAJAJ ELECTRICALS\n3. CIPLA\n4. GODREJ PROP.\n5. GOODYEAR\n");
    printf("6. HAVELLES\n7. HDFC BANK\n8. MUTHOOT FIN.\n9. ONGC\n10.RAYMOND\n11.Exit\nenter your choice:");
    scanf("%s", choice);
    int input=atoi(choice);
    switch (input)
    {
    case 1:
        printf("\nAJANTA PHARMA\n\n");
        *fptr= fopen("../data/ajanta.csv","r");
        return;
    case 2:
        printf("\nBAJAJ ELECTRICALS\n\n");
        *fptr= fopen("../data/bajaj.csv","r");
        return;
    case 3:
        printf("\nCIPLA\n\n");
        *fptr= fopen("../data/cipla.csv","r");
        return;
    case 4:
        printf("\nGODREJ PROP.\n\n");
        *fptr= fopen("../data/godrej.csv","r");
        return;
    case 5:
        printf("\nGOODYEAR\n\n");
        *fptr= fopen("../data/goodyear.csv","r");
        return;
    case 6:
        printf("\nHAVELLES\n\n");
        *fptr= fopen("../data/havelles.csv","r");
        return;
    case 7:
        printf("\nHDFC BANK\n\n");
        *fptr= fopen("../data/hdfc.csv","r");
        return;
    case 8:
        printf("\nMUTHOOT FIN.\n\n");
        *fptr= fopen("../data/muthoot.csv","r");
        return;
    case 9:
        printf("\nONGC\n\n");
        *fptr= fopen("../data/ongc.csv","r");
        return;
    case 10:
        printf("\nRAYMOND\n\n");
        *fptr= fopen("../data/raymond.csv","r");
        return;
    case 11:
        exit(0);
    default:
        printf("Invalid Selection");
        break;
    }
    
  }
}