#include <stdio.h>
int main(){
    int seats = 40;
    int booking = 1;

    while(seats > 0 && booking != 0){
        printf("Book a seat? (1=Yes, 0=Stop): ");
        scanf("%d", &booking);

        if(booking == 1){
            seats--;
            printf("Remaining seats: %d\n", seats);
        }
    }

    if(seats == 0){
        printf("All seats are booked!\n");
    }else{
        printf("Reservation stopped early. Remaining seats: %d\n", seats);
    }

    return 0;
}