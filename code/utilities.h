#ifndef KASHYYYK6_UTILITIES_H
#define KASHYYYK6_UTILITIES_H

//day of week, 7pm/9pm, Endoor/Naboo/Tatooine
extern char dinnerTables[7][2][3][50];
//room, {bookingData}
extern char bookings[6][9][50];

int checkIn();
int checkOut();
int bookTable();

//in validation.c
int dobToAge(char * dob);//converts a dd/mm/yyyy to an age, if returns 0, then errored in some way also validates age
//in fileHandling.c
void updateLocalBookingList();

#endif //KASHYYYK6_UTILITIES_H
