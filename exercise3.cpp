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
    printf("\n");
    // count to 100 by tens using for loop
    for (int i = 0; i <= 100; i+=10){
        printf("%d\n", i);
    }
    // print the multiplication table using nested loop

    for (int i = 0; i <= 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d x %d = %d\t", i, j, (i*j));
            
        }
        printf("\n");
    }

    printf("\n");

    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int lengthAges = (sizeof(ages) / sizeof(ages[0]));
    int sum = 0;
    int lowest = 99;
    for (int i = 0; i < lengthAges; i++){
        sum += ages[i];

        if (ages[i] < lowest){
            lowest = ages[i];
        }
    }
    printf("Average age: %.2f\n", float(sum)/float(lengthAges));
    printf("Lowest age: %d\n", lowest);



}
