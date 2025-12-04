#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[50];
    char hostel_address[50];
    char city[20];
    char state[20];
    char zip[10];
};

int main() {
    union Address addr;

    // Only one field can hold valid data at a time
    strcpy(addr.hostel_address, "Hostel Block A, Room 12");
    printf("Present Address: %s\n", addr.hostel_address);

    return 0;
}
