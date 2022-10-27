/*In main func we are just calling all the functions
which are needed to execute the program*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>
#include <struct.h>


int main(){

    while(1){
     FILE *fptr=NULL;
     selectChoice(&fptr);
     loadStockData(&fptr);
     fclose(fptr);
    
    int val;
    printf("Press 1:For Main Menu\n");
    printf("Press 0:To Exit Program\n");
    scanf("%d",&val);
    if(val==0){
        break;
    }
    }
    return 0;
}