#include <iostream>

#include <cstdio>
#include <cstdlib>
#include <ctime>

int main (int argc, char const *argv[])
{
	//std::cout << "Memorize hex codes!\n";

	std::srand(time(NULL));

	auto rand = std::rand;
	for (int i = 0; i < 10; ++i)
	{
		int r = rand() % 256;
		int g = rand() % 256;
		int b = rand() % 256;
		std::printf("\tRGB (%d, %d, %d)\n", r, g, b);
	}
	return 0;
}
