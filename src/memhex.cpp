#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char const *argv[])
{
	//std::cout << "Memorize hex codes!\n";

	srand(time(NULL));

	for (int i = 0; i < 10; ++i)
	{
		int r = rand() % 256;
		int g = rand() % 256;
		int b = rand() % 256;
		printf("\tRGB (%d, %d, %d)\n", r, g, b);
	}
	return 0;
}
