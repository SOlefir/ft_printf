#include "tests.h"

void before()
{
	printf("[");
}

void between(int ret)
{
	printf("] - %d\n", ret);
	write(1, "[", 1);
}

void after(int ret)
{
	write(1, "] - ", 4);
	ft_putnbr(ret);
	write(1, "\n\n", 2);
}

int 	main(void)
{
	type_char();
	//type_str();
	return(0);
}
