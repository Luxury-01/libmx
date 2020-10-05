#include "libmx.h"

bool mx_isalp(char c) {

	if (c == 'a' || c == 'A' ||

		c == 'b' || c == 'B' ||

		c == 'c' || c == 'C' ||

		c == 'd' || c == 'D' ||

		c == 'e' || c == 'E' ||

		c == 'f' || c == 'F') 

	{
    	return true;
	}
	return false;
	}
