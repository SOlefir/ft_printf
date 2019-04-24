#include "tests.h"

void	type_unsigned(void)
{
	int ret;
	
	printf("\n----------- type u ------------\n");
	
	before();
	ret = printf("%u", 1);
	between(ret);
	ret = ft_printf("%u", 1);
	after(ret);

	before();
	ret = printf("%u", 0);
	between(ret);
	ret = ft_printf("%u", 0);
	after(ret);

	before();
	ret = printf("%u", -1);
	between(ret);
	ret = ft_printf("%u", -1);
	after(ret);

	before();
	ret = printf("%u", 4294967295);
	between(ret);
	ret = ft_printf("%u", 4294967295);
	after(ret);

	before();
	ret = printf("%u", 4294967296);
	between(ret);
	ret = ft_printf("%u", 4294967296);
	after(ret);

	before();
	ret = printf("%5u", 4294967295);
	between(ret);
	ret = ft_printf("%5u", 4294967295);
	after(ret);


	before();
	ret = printf("%-5u", 4294967295);
	between(ret);
	ret = ft_printf("%-5u", 4294967295);
	after(ret);

	before();
	ret = printf("%15u", 4294967295);
	between(ret);
	ret = ft_printf("%15u", 4294967295);
	after(ret);

	before();
	ret = printf("%-15u", 4294967295);
	between(ret);
	ret = ft_printf("%-15u", 4294967295);
	after(ret);

	before();
	ret = printf("%015u", 4294967295);
	between(ret);
	ret = ft_printf("%015u", 4294967295);
	after(ret);

	before();
	ret = printf("% u", 4294967295);
	between(ret);
	ret = ft_printf("% u", 4294967295);
	after(ret);


	before();
	ret = printf("%+u", 4294967295);
	between(ret);
	ret = ft_printf("%+u", 4294967295);
	after(ret);


	before();
	ret = printf("%lu", -42);
	between(ret);
	ret = ft_printf("%lu", -42);
	after(ret);

	before();
	ret = printf("%lu", 4294967295);
	between(ret);
	ret = ft_printf("%lu", 4294967295);
	after(ret);

	before();
	ret = printf("%lu", 4294967296);
	between(ret);
	ret = ft_printf("%lu", 4294967296);
	after(ret);

	before();
	ret = printf("%lu", 4294967295);
	between(ret);
	ret = ft_printf("%lu", 4294967295);
	after(ret);
	
	before();
	ret = printf("%llu", 4294967295);
	between(ret);
	ret = ft_printf("%llu", 4294967295);
	after(ret);

	before();
	ret = printf("%ju", 4999999999);
	between(ret);
	ret = ft_printf("%ju", 4999999999);
	after(ret);

	before();
	ret = printf("%ju", 4294967296);
	between(ret);
	ret = ft_printf("%ju", 4294967296);
	after(ret);

	before();
	ret = printf("%U", 4294967295);
	between(ret);
	ret = ft_printf("%U", 4294967295);
	after(ret);

	before();
	ret = printf("%hU", 4294967296);
	between(ret);
	ret = ft_printf("%hU", 4294967296);
	after(ret);

	printf("\n-------------------------------\n");
}