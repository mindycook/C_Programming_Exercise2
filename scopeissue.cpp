#include <stdio.h>
#include <stdbool.h>

int x = 5;

// Declaring before defining will makes your code tidier!!
// Do that!


// Declaration
void myFunction();
// Definition
void myFunction(){
    int x = 22;
    printf("%d\n", x);// refers to the local variable x
}
int main() {
    myFunction();
    printf("%d\n", x); // refers to the global variable x
    return 0;
}

