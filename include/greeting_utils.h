#include <string>
#ifndef GREETING_UTILS
#define GREETING_UTILS

namespace GreetingUtils {
	std::string create_message(const std::string& name);
	char* format_as_c_string(const std::string& msg);
}
#endif
