#include <stdio.h>
#include <stdbool.h>
int main() {
// Another way to access an Array using the pointer address
for (int i = 0; i < 4; i++){
	printf("%d\n", *(myNumbers+i));
}
return 0;
}