#include "tests.h"

void	type_str(void)
{
	int ret;
	
	printf("\n----------- type str ------------\n");
	
	before();
	ret = printf(" ");
	between(ret);
	ret = ft_printf(" ");
	after(ret);


	before();
	ret = printf("\n");
	between(ret);
	ret = ft_printf("\n");
	after(ret);


	before();
	ret = printf(" my str");
	between(ret);
	ret = ft_printf(" my str");
	after(ret);

	printf("\n-------------------------------\n");
}
