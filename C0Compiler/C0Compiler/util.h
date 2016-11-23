#ifndef UTIL_H
#define UTIL_H
#include <string>

class util
{
public:
	static bool isNumber(char chr);			//to check whether a char belongs to "0-9"
	static bool isLetter(char chr);			//to check whether a char belongs to "a-z"+"A-z"
	static bool isChr(char chr);			//to check whether a char belongs to {32,33,35-126}
	static int parseInt(std::string str);	//parse int
	static char parseChar(std::string str);	//parse char
	static std::string int2string(int in);	//transfer int to char
};


#endif