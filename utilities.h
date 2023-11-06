#ifndef KASHYYYK6_UTILITIES_H
#define KASHYYYK6_UTILITIES_H

//day of week, 7pm/9pm, Endoor/Naboo/Tatooine
extern char dinnerTables[7][2][3];
//room, {bookingData}
extern char bookings[6][9];

int checkIn();
int checkOut();
int bookTable();

#endif //KASHYYYK6_UTILITIES_H
