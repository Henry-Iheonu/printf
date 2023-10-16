#include "main.h"

int _printf(const char *format, ...)
{
	(void) format;
	printf("%s\n", "This is from _printf function");
	return (0);
}