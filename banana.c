#include <stdio.h>

void print_numbers(void) {
for (int i = 0; i <= 10; i++) {
	printf("%d",i);
}
}

int main(void) {
	printf("Hello World!\n");
	printf("This is a new line ...\n");
	print_numbers();
	
}
