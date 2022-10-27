/*This file contains showReco() func which calculates 
and shows the recommendation to the User*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>
#include <struct.h>

void showReco(struct NODE* head){
    int i;
    float sum1 = 0.0,sum2 = 0.0;
    for(i=0;i<RANGE2 && head->next != NULL; i++){
        if(i<RANGE1){
          sum1 += atof(head->adjClose);
        }
        sum2 += atof(head->adjClose);
        head = head->next;
    }
    float avg1=sum1/RANGE1;
    float avg2=sum2/RANGE2;

    if(avg1<avg2){
        printf("%f is less than %f\n",avg1,avg2);
        printf("Recommendation : BUY\n");
    }else if(avg1>avg2){
        printf("%f is greater than %f\n",avg1,avg2);
        printf("Recommendation : SELL\n");
    }else{
        printf("Recommendation : HOLD\n");
    }
}