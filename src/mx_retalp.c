#include "libmx.h"

unsigned long mx_retalp(char c) {
    if (c == 'a' || c == 'A') {
		return 10;
	}
	if (c == 'b' || c == 'B') {
		return 11;
	}
	if (c == 'c' || c == 'C') {
		return 12;
	}
	if (c == 'd' || c == 'D') {
		return 13;
	}
	if (c == 'e' || c == 'E') {
		return 14;
	}
	if (c == 'f' || c == 'F') {
		return 15;
	}
	return 0;
}
