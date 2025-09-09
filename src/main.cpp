#include <iostream>
#include <string>
#include "greeting_utils.h"

using std::cout, std::cin, std::endl,std::string;

int main() {
	cout << "Enter name: ";
	string name;
	std::getline(cin, name);
	string greeting = GreetingUtils::create_message(name);
	char* c_greeting = GreetingUtils::format_as_c_string(greeting);
	cout << c_greeting << endl;

	delete[] c_greeting;

	return 0;	
}
