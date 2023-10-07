#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	// void* ptr = 0;
	// void* ptr = NULL;
	// void* ptr = nullptr;
	int var = 8;
	int* ptr = &var; 
	*ptr = 10;
	LOG(var);
	std::cin.get();
}