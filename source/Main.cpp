#include <iostream>

int main()
{
	std::cout <<"this is my first code on powershell!!" << std::endl;
	std::cout << "if this is good, press 1!" << std::endl;
	int x;
	std::cin >> x; 
	while (x =! 1) 
	{
		std::cout << "Invalid Key!!" << std::endl;
		std::cin >> x;
	}
	std::cout << "Great Thanks!" << std::endl;
	
	std::cout << "press any key to end the program" << std::endl;
	std::cin >> x;
	return 0;
}