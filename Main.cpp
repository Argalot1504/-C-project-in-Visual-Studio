#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello there!\n" << "Enter your name:\n";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Your name is " << name << "\n";
	std::cout << "Your name include " << name.length() << " symbols" << "\n";
	std::cout << "The first letter of your name is " << name.front() << "\n";
	std::cout << "The last letter of your name is " << name.back() << "\n";
}