#include <stdio.h>
#include <stdint.h>
#include <assert.h>

//First challange is easy. Add 1 to every element of array "byteArr". When you suceed HELLO WORLD will be displayed.


uint8_t byteArr[] = { 0xAA,0xBB,0xCC,0xFF };

void game(uint8_t* array, size_t length) {
	}
}


int main()
{
	game(byteArr,sizeof(byteArr));
	int sumSolution = byteArr[0]+byteArr[1]+byteArr[2]+byteArr[3];
	assert(564 == sumSolution);
	printf("\tHELLO WORLD !\t\n");
	return 0;
}

