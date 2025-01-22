#include <stdio.h>
#include <stdbool.h>
int main() {
    int myNumbers[4] = {25, 750, 75, 100};
    // Another way to access an Array using the pointer address
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    for (int i = 0; i < length; i++){
        printf("%d\n", *(myNumbers+i)); // using pointer
        printf("%d\n", myNumbers[i]); // using array index
        // Either is the same thing..?
    }
    return 0;
}

