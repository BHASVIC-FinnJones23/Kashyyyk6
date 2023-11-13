#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utilities.h"

char bookings[6][9][50];

void updateLocalBookingList(){
    FILE *fpointer;
    char lineHolder[500]="";
    int i=0;
    for(i=1;i<=6;i++){
        char path[15]="..//room0.txt";
        path[8]=i+'0';
        printf("roomspath is :%s\n",path);


        if((fpointer = fopen(path,"r"))==NULL){
            printf("Error Opening the file!\n");
        }else{
            printf("~~~~File %s opened~~~~\n",path);
        }
        int k=0;
        int j=0;
        while(fgets(lineHolder,500,fpointer)!=NULL){
            while(lineHolder[j]!='\0'){
                printf("%s",lineHolder);
                //bookings[i-1][k][j]=lineHolder[j];
                
                j++;
            }
            k++;
        }
        fclose(fpointer);
        printf("-----CLOSING FILE-----\n");
    }
    printf("Booking array\n");
    int k;
    for(i=0;i<6;i++){
        for(k=0;k<9;k++){
            printf("%s,",bookings[i][k]);
        }
        printf("\n");
    }


}
