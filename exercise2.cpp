#include <stdio.h>
#include <stdbool.h>

int main() {
    bool myBool;
    int myNum;
    printf("Please enter a number\n");
    scanf("%d", &myNum);

    char myText[] = "";
    if (myNum == 0){
        printf("%d is zero\n", myNum);
    }
    else if (myNum > 0){
        printf("%d is positive\n", myNum);
    }
    else{
        printf("%d is negative", myNum);
    }

    if (myNum % 2 == 0){
        printf("%d is even\n", myNum);
    }
    else{
        printf("%d is odd\n", myNum);
    }
}


