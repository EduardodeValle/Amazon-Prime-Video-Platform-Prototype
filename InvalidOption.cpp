#include "InvalidOption.h"


InvalidOption::InvalidOption(string n) {
	msg = "invalid option " + n;
}

string InvalidOption::what() {
	return msg;
}