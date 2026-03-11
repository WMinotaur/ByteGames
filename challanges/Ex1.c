#include <stdio.h>
#include <stdint.h>
#include <assert.h>


uint8_t byteArr[] = { 0xAA,0xBB,0xCC,0xFF };

void game(uint8_t* array, size_t length) {
	//place for bit twiddling
	//hello world
	for(uint8_t i = 0; i<length ; i++){
	array[i] = array[i] + 1;
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

