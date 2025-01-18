#include <iostream>

int main(int argc, char* argv[])
{
	for (int i = 1; i <= 100; ++i)
	{
		if (i % 15 == 0){ std::cout << "hogepiyo" << std::endl; }
		else if (i % 5 == 0){ std::cout << "piyo" << std::endl; }
		else if (i % 3 == 0){ std::cout << "hoge" << std::endl; }
		else { std::cout << i << std::endl; }
	}
}