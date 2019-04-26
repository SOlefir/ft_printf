#include "tests.h"

void	type_o(void)
{
	int ret;

	printf("\n----------- type oct ------------\n");

	before();
	ret = printf("%o", 42);
	between(ret);
	ret = ft_printf("%o", 42);
	after(ret);

	before();
	ret = printf("%5o", 42);
	between(ret);
	ret = ft_printf("%5o", 42);
	after(ret);

	before();
	ret = printf("%-5o", 42);
	between(ret);
	ret = ft_printf("%-5o", 42);
	after(ret);

	before();
	ret = printf("%o", 0);
	between(ret);
	ret = ft_printf("%o", 0);
	after(ret);

	before();
	ret = printf("%o%o%o%o%o", 1, 100, 999, 42, 999988888);
	between(ret);
	ret = ft_printf("%o%o%o%o%o", 1, 100, 999, 42, 999988888);
	after(ret);

	before();
	ret = printf("a%ob%oc%od", 0, 55555, 100000);
	between(ret);
	ret = ft_printf("a%ob%oc%od", 0, 55555, 100000);
	after(ret);

	before();
	ret = printf("%O", LONG_MAX);
	between(ret);
	ret = ft_printf("%O", LONG_MAX);
	after(ret);

	before();
	ret = printf("before %O after", 42);
	between(ret);
	ret = ft_printf("before %O after", 42);
	after(ret);


	before();
	ret = printf("%O%O%O%O%O", 1, 100, 999, 42, 999988888);
	between(ret);
	ret = ft_printf("%O%O%O%O%O", 1, 100, 999, 42, 999988888);
	after(ret);

	before();
	ret = printf("a%Ob%Oc%Od", 0, 55555, 100000);
	between(ret);
	ret = ft_printf("a%Ob%Oc%Od", 0, 55555, 100000);
	after(ret);

	before();
	ret = printf("@moulitest: %o", 0);
	between(ret);
	ret = ft_printf("@moulitest: %o", 0);
	after(ret);

	before();
	ret = printf("%#llo", 9223372036854775807);
	between(ret);
	ret = ft_printf("%#llo", 9223372036854775807);
	after(ret);

	before();
	ret = printf("%#-08o", 42);
	between(ret);
	ret = ft_printf("%#-08o", 42);
	after(ret);

	before();
	ret = printf("%#.8o", 0);
	between(ret);
	ret = ft_printf("%#.8o", 0);
	after(ret);


	before();
	ret = printf("% .8o", 42);
	between(ret);
	ret = ft_printf("% .8o", 42);
	after(ret);

	before();
	ret = printf("% .o", 0);
	between(ret);
	ret = ft_printf("% .o", 0);
	after(ret);


	before();
	ret = printf("%#2o", 0);
	between(ret);
	ret = ft_printf("%#2o", 0);
	after(ret);

	before();
	ret = printf("%jo", -4294967297);
	between(ret);
	ret = ft_printf("%jo", -4294967297);
	after(ret);

	before();
	ret = printf("%jo", 4294967295);
	between(ret);
	ret = ft_printf("%jo", 4294967295);
	after(ret);

	before();
	ret = printf("%hhO", 4294967296);
	between(ret);
	ret = ft_printf("%hhO", 4294967296);
	after(ret);

	before();
	ret = printf("%llO", 4294967296);
	between(ret);
	ret = ft_printf("%llO", 4294967296);
	after(ret);


	printf("\n-------------------------------\n");
}
