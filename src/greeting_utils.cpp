#include <string>
#include <iostream>
#include "greeting_utils.h"

using std::cout, std::cin, std::string, std::endl;

namespace GreetingUtils {
	string create_message(const std::string& name) {
		return "Hello, " + name + "!";
	}
	char* format_as_c_string(const string& msg) {
		int len = msg.size();
		char* arr = new char[len + 1];
		for (int i = 0; i < len; ++i) {
			arr[i] = msg[i];
		}
		arr[len] = '\0';
		return arr;
	}

}
