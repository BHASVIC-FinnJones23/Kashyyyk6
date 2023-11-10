#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int dobToAge(char * dob){
    int valid = 1,age=47,slashPos=0,diff;
    char dobWithoutSlash[200]="";
    char backwardsDOB[200]="";
    printf("Date of birth is: %s\n",dob);
    //check if is not dd/mm/yyyy, as doesn't have enough characters
    //if kashyyyk hotel exists after year 9999, they shouldn't be using this software anymore
    if(strlen(dob)!=10){
        valid=0;
    }

    int i=0;
    //remove slashes, and check if contains JUNK
    for(i=0;i<=9;i++){
        if((isdigit(dob[i])==0) && (dob[i]!='/')){
            valid = 0;
        }
        if(dob[i]!='/') {
            dobWithoutSlash[slashPos] = dob[i];
            slashPos++;
        }
    }

    puts("converted dob without slashes anmd junk is::");
    puts(dobWithoutSlash);

    //convert into yyyymmdd and subtract it from current yyyymmdd
    for(i=0;i<4;i++){
        backwardsDOB[i]=dobWithoutSlash[4+i];
    }
    backwardsDOB[4]=dobWithoutSlash[2];
    backwardsDOB[5]=dobWithoutSlash[3];
    backwardsDOB[6]=dobWithoutSlash[0];
    backwardsDOB[7]=dobWithoutSlash[1];

    printf("backward dob before processing%d\n", atoi(backwardsDOB));

    age = 20231110-atoi(backwardsDOB);//ignore atoi
    age=age/10000;//integer division hjell yeah
    diff = 20231110-atoi(backwardsDOB);

    printf("backward dob after processing%d\n", atoi(backwardsDOB));

    printf("diff: %d\n",diff);

    if (age<=0&&diff!=0){valid=0;}
    if (age>150){valid=0;}
    if(valid){
        return age;
    } else{
        return 0;
    }
}


