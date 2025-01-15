#include <stdio.h>

int main() {
    int temp1 = 70;
    int temp2 = 85;
    int myTemp;

    printf("Please input a temperature\n");
    scanf("%d", &myTemp);
    printf("Result: ");
    bool evaluate = myTemp > temp1 && myTemp < temp2;
    printf("%d\n",evaluate);
    return 0;


}


