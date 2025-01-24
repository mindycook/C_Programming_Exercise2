#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *fptr;

// Open a file in writing mode
fptr = fopen("hello.txt", "w");

if (fptr == NULL){
    printf("The file is not opened. The program will exit now");
    exit(0);
}
else{
    printf("The file is created successfully\n");
}


// Write some text to the file
fprintf(fptr, "Hello,\nHow are you?\nMy name is ...\nWhat's your name?\n");
// Close the file
fclose(fptr);

// Open a file in reading mode
fptr = fopen("hello.txt", "r");
// store the content of the file
char myString[100];

// read the content and store it inside myString
//fgets(myString, 100, fptr);

// IF THERE MORE THAN one line
while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
}

// print the file content
//printf("%s", myString);

//close the file

fclose(fptr);



return 0;
}