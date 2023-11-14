//
// Created by georg on 14/11/2023.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void restaurantbooking()
{
    char yn;
    char inputtedbookingid;

    printf("The Kashyyyk Hotel Diner - Would you like to book a table?:");
    fflush(stdin);
    scanf("%c",&yn);
    if (yn == 'y')
    {
        printf("Please enter your booking ID: ");
        fflush(stdin);
        scanf("%c",&inputtedbookingid);
        while
        {

        }
    }
    else
    {
        printf("\n\nReturning to menu...");
        Sleep(1000);
        exit(0);
    }

    return restaurantbooking();
}
