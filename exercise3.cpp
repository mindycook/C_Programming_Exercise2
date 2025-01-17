#include <stdio.h>
#include <stdbool.h>

int main() {
    // Countdown from 10 to 1 and output happy new year
    int count = 10;
    while (count > 0){
        printf("%d\n", count);
        --count;
    }
    printf("Happy New Year!\n\n");

    // print even numbers between 0 and 10 using while loop
    count = 0;
    while (count <= 10){
        printf("%d\n", count);
        count += 2;
    }
}
