#include "0-putchar.c"
int main(void)
{
	char *sh = "Putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
