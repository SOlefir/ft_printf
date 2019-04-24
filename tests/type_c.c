#include "tests.h"

void	type_char(void)//дописать мод. длинны
{
	int ret;

	printf("\n----------- type c ------------\n");

	before();
	ret = printf("%c", 42);
	between(ret);
	ret = ft_printf("%c", 42);
	after(ret);

	before();
	ret = printf("%5c", 42);
	between(ret);
	ret = ft_printf("%5c", 42);
	after(ret);

	before();
	ret = printf("%-5c", 42);
	between(ret);
	ret = ft_printf("%-5c", 42);
	after(ret);

	before();
	ret = printf("%c", 0);
	between(ret);
	ret = ft_printf("%c", 0);
	after(ret);

	before();
	ret = printf("%25c", 42);
	between(ret);
	ret = ft_printf("%25c", 42);
	after(ret);

	before();
	ret = printf("%.2c", NULL);
	between(ret);
	ret = ft_printf("%.2c", NULL);
	after(ret);

	before();
	ret = printf("% c", 0);
	between(ret);
	ret = ft_printf("% c", 0);
	after(ret);

	before();
	ret = printf("null %c and text", 0);
	between(ret);
	ret = ft_printf("null %c and text", 0);
	after(ret);


	before();
	ret = printf("% c", 0);
	between(ret);
	ret = ft_printf("% c", 0);
	after(ret);

	before();
	ret = printf("%2c", 0);
	between(ret);
	ret = ft_printf("%2c", 0);
	after(ret);

	before();
	ret = printf("@moulitest: %c", 0);
	between(ret);
	ret = ft_printf("@moulitest: %c", 0);
	after(ret);


	printf("\n-------------------------------\n");
}
