#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
int32_t addi(int32_t a, int32_t b) {
	printf("int32\n"); // 3
    return a + b;
}


int16_t addd(int16_t a, int16_t b) {
	printf("int16\n"); // 3
    return a + b;
}

uint16_t add2(uint16_t a, uint16_t b) {
	printf("uint16\n"); // 3
    return a + b;
}


#define add(a, b) _Generic(a, int: addi, int16_t: addd,uint16_t: add2)(a, b);

int main(void) {
    int32_t a = 1, b = 2;
    printf("%d\n", add(a, b)); // 3
	
	int16_t a1 = 1, b1 = 2;
    printf("%d\n", add(a1, b1)); // 3

	uint16_t a11 = 1, b11 = 2;
    printf("%d\n", add(a11, b11)); // 3
   

    return 0;
}
