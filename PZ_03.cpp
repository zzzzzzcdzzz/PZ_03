

#include <iostream>


int main()
{
	int Number1 = 1 / 2;

	int Number = 42;
	unsigned int Number2 = Number / -17.0f;

	char Letter = 'c';
	int Number3 = Letter;

	double PI = 3.1415926535897932384626433;
	char PIchar = PI;

	std::cout << "1 / 2 = int " << Number1 << std::endl;
	std::cout << "42 / -17.0f = unsigned int " << Number2 << " value is garbage" << std::endl;
	std::cout << "char to int = " << Number3 << std::endl;
	std::cout << "double to char = " << PIchar << std::endl;

	system("pause");
    return 0;
}

