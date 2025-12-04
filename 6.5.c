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

    strcpy(addr.name, "Rahul Sharma");
    printf("Name: %s\n", addr.name);

    strcpy(addr.home_address, "123 Green Street");
    printf("Home Address: %s\n", addr.home_address);

    strcpy(addr.city, "Dehradun");
    printf("City: %s\n", addr.city);

    strcpy(addr.state, "Uttarakhand");
    printf("State: %s\n", addr.state);

    strcpy(addr.zip, "248198");
    printf("Zip: %s\n", addr.zip);

    return 0;
}
