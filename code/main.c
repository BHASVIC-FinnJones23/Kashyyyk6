#include <stdio.h>
#include "utilities.h"

int main() {
    char test[11] = "09/11/2023";
    printf("output from function is: %d\n", dobToAge(test));
    return 0;
}
