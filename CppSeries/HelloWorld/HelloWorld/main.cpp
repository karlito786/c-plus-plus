#include <iostream>

void Log(const char* message);

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);

	Log("Hello World!");
	std::cin.get();
}