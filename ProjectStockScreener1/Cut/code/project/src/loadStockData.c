/*This file contains loadStockData() func which takes a file pointer and 
fetch data from csv file and load it into the linked list */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <main.h>
#include <struct.h>
   
struct NODE *head=NULL;
struct NODE *node=NULL;

/*load data into the linked list*/
void loadStockData(FILE** fptr){
  
    char parsedLine[PARSEDLEN];
    int row = 0;
     while(fgets(parsedLine,PARSEDLEN,*fptr) != NULL){
        /*remove this to retain date from csv file*/
        row++;
        if(row == 1 || parsedLine[0] == '#' || parsedLine[0] == 0 || parsedLine[0] == ' ' ){
            continue;
        }
        node = (struct NODE*)malloc(sizeof(struct NODE));

        char* lDate = strtok(parsedLine, ",");
            strncpy(node->date, lDate,DATELEN-1); 
        char *lOpen = strtok(NULL, ","); 
            strncpy(node->open, lOpen,OPENLEN-1);
        char *lHigh = strtok(NULL, ",");
            strncpy(node->high, lHigh,HIGHLEN-1);
        char *lLow = strtok(NULL, ",");
            strncpy(node->low, lLow,LOWLEN-1);
        char *lClose = strtok(NULL, ",");
            strncpy(node->close, lClose,CLOSELEN-1);
        char *lAdjClose = strtok(NULL, ",");
            strncpy(node->adjClose, lAdjClose,ADJCLOSELEN-1);
        char *lVolume = strtok(NULL, ",");
            strncpy(node->volume, lVolume,VOLUMELEN-1);
        node -> next = head;
        head = node;
    }
    // fclose(*fptr);
   
    struct NODE* avghead= head;
    printf("Date\t\tOpen\t\tHigh\t\tLow\t\tClose\t\tAdj Close\tVolume\n\n");
    while(head!=NULL){
        printf("%s\t%s\t%s\t%s\t%s\t%s\t%d\n",head->date,head->open,head->high,head->low,head->close,head->adjClose,atoi(head->volume));
        head=head->next;
    }
 
/*shows the recommendation*/
    showReco(avghead);

/*freeing the allocated memory*/
    struct NODE *current = NULL;
    while ((current = avghead) != NULL)
    {
        avghead = avghead->next;
        free(current);
    }
    
}
