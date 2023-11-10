#ifndef KASHYYYK6_UTILITIES_H
#define KASHYYYK6_UTILITIES_H

//day of week, 7pm/9pm, Endoor/Naboo/Tatooine
extern char dinnerTables[7][2][3];
//room, {bookingData}
extern char bookings[6][9];

int checkIn();
int checkOut();
int bookTable();


int dobToAge(char * dob);//converts a dd/mm/yyyy to an age, if returns 0, then errored in some way also validates age


#endif //KASHYYYK6_UTILITIES_H
