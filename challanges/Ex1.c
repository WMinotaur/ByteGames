#include <stdio.h>
#include <stdint.h>
#include <assert.h>



//Write a function that, for each byte in the given array,
//first inverts every second bit (i.e., flips bits at positions 1, 3, 5, 7), and then inverts the entire byte. 
//The function should modify the array in place. When you succeed you will be congratulated.		



uint8_t byteArr[] = { 0xAA,0xBB,0xCC,0xDD,0xFF };

void game(uint8_t* array, size_t length) {
	
   //Place to write your code 
}




int main()
{
	game(byteArr,sizeof(byteArr));
	int sumSolution = byteArr[0]+byteArr[1]+byteArr[2]+byteArr[3];
	assert(952 == sumSolution);
	printf("\tCONGRATULATIONS!\t\n");
	return 0;
}

