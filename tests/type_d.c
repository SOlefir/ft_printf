#include "tests.h"

void	type_d(void) //дописать мод. длинны
{
	int ret;
	
	printf("\n----------- type d ------------\n");
	before();
	ret = printf("%d", 2147483647);
	between(ret);
	ret = ft_printf("%d", 2147483647);
	after(ret);

	before();
	ret = printf("%.5d", 123);
	between(ret);
	ret = ft_printf("%.5d", 123);
	after(ret);

	before();
	ret = printf("%d", 2147483648);
	between(ret);
	ret = ft_printf("%d", 2147483648);
	after(ret);

	before();
	ret = printf("%d", -2147483649);
	between(ret);
	ret = ft_printf("%d", -2147483649);
	after(ret);

	before();
	ret = printf("the %d", 1);
	between(ret);
	ret = ft_printf("the %d", 1);
	after(ret);

	before();
	ret = printf("%d is one", 1);
	between(ret);
	ret = ft_printf("%d is one", 1);
	after(ret);

	before();
	ret = printf("% d", 42);
	between(ret);
	ret = ft_printf("% d", 42);
	after(ret);

	before();
	ret = printf("% d", -42);
	between(ret);
	ret = ft_printf("% d", -42);
	after(ret);

	before();
	ret = printf("%+d", -42);
	between(ret);
	ret = ft_printf("%+d", -42);
	after(ret);

	before();
	ret = printf("%+d", 42);
	between(ret);
	ret = ft_printf("%+d", 42);
	after(ret);

	before();
	ret = printf("%++d", 87);
	between(ret);
	ret = ft_printf("%++d", 87);
	after(ret);

	before();
	ret = printf("%++d", -87);
	between(ret);
	ret = ft_printf("%++d", -87);
	after(ret);


	before();
	ret = printf("%+d", 18446744073709551615U);
	between(ret);
	ret = ft_printf("%+d", 18446744073709551615U);
	after(ret);

	before();
	ret = printf("%  +d", 20);
	between(ret);
	ret = ft_printf("%  +d", 20);
	after(ret);


	before();
	ret = printf("%+   d", 20);
	between(ret);
	ret = ft_printf("%+   d", 20);
	after(ret);


	before();
	ret = printf("%++  d", 20);
	between(ret);
	ret = ft_printf("%++  d", 20);
	after(ret);


	before();
	ret = printf("%0d", 20);
	between(ret);
	ret = ft_printf("%0d", 20);
	after(ret);

	before();
	ret = printf("%00d", 20);
	between(ret);
	ret = ft_printf("%00d", 20);
	after(ret);

	before();
	ret = printf("%5d", 50);
	between(ret);
	ret = ft_printf("%5d", 50);
	after(ret);

	before();
	ret = printf("%5d", -50);
	between(ret);
	ret = ft_printf("%5d", -50);
	after(ret);


	before();
	ret = printf("%50d", 50);
	between(ret);
	ret = ft_printf("%50d", 50);
	after(ret);


	before();
	ret = printf("%05d", 50);
	between(ret);
	ret = ft_printf("%05d", 50);
	after(ret);


	before();
	ret = printf("%0+5d", 50);
	between(ret);
	ret = ft_printf("%0+5d", 50);
	after(ret);

	before();
	ret = printf("%-5d", 50);
	between(ret);
	ret = ft_printf("%-5d", 50);
	after(ret);

	before();
	ret = printf("%-05d", 050);
	between(ret);
	ret = ft_printf("%-5d", 50);
	after(ret);


	before();
	ret = printf("%-5d", -50);
	between(ret);
	ret = ft_printf("%-5d", -50);
	after(ret);

	printf("\n-------------------------------\n");
}
