#include "tests.h"

void	type_p(void)
{
	int 			ret;
	int				i;
	unsigned long 	l;
	char			*str;


	printf("\n----------- type p ------------\n");

	before();
	ret = printf("%p", &i);
	between(ret);
	ret = ft_printf("%p", &i);
	after(ret);

	before();
	ret = printf("%p", &l);
	between(ret);
	ret = ft_printf("%p", &l);
	after(ret);


	before();
	ret = printf("%p", &str);
	between(ret);
	ret = ft_printf("%p", &str);
	after(ret);

	before();
	ret = printf("%p", &type_c);
	between(ret);
	ret = ft_printf("%p", &type_c);
	after(ret);


	before();
	ret = printf("%p", 0);
	between(ret);
	ret = ft_printf("%p", 0);
	after(ret);

	before();
	ret = printf("%.0p, %.p", 0, 0);
	between(ret);
	ret = ft_printf("%.0p, %.p", 0, 0);
	after(ret);


	before();
	ret = printf("%.5p", 0);
	between(ret);
	ret = ft_printf("%.5p", 0);
	after(ret);

	before();
	ret = printf("%9.2p", 1234);
	between(ret);
	ret = ft_printf("%9.2p", 1234);
	after(ret);


	before();
	ret = printf("%2.9p", 1234);
	between(ret);
	ret = ft_printf("%2.9p", 1234);
	after(ret);

	before();
	ret = printf("%2.9p", 1234567);
	between(ret);
	ret = ft_printf("%2.9p", 1234567);
	after(ret);


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



	printf("\n-------------------------------\n");
}
