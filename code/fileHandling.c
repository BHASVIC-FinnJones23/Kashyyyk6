#include <stdio.h>
#include <stdio.h>
#include "utilities.h"

char bookings[6][9][50];

void updateLocalBookingList(){
    FILE *fpointer;
    char lineHolder[500]="";
    int i=0;
    if((fpointer = fopen("..//booking.txt","r"))==NULL){
        printf("Error Opening the file!\n");
    }
    while(fgets(lineHolder,500,fpointer)!=NULL){
        //please fix this it doesn't work
        //bookings[i][0] = strsplit(lineHolder,',');
        i++;
    }
    fclose(fpointer);
    //printf("the contents of the booking file is as follows \n%s",rawBookingFile);

}
