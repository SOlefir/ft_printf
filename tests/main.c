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
	//type_char();
	//printf("%x", 7);
	//type_str();
	//type_dex();
	//type_unsigned();
	//type_xeh();
	//type_o();
	// type_pointer();
	type_float();
	return(0);
}
