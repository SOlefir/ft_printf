#include "tests.h"

void	type_dex(void) //дописать мод. длинны
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
	ret = printf("%.05d", 123);
	between(ret);
	ret = ft_printf("%.05d", 123);
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
	ret = ft_printf("%-05d", 50);
	after(ret);


	before();
	ret = printf("%-5d", -50);
	between(ret);
	ret = ft_printf("%-5d", -50);
	after(ret);

	before();
	ret = printf("%05d", -50);
	between(ret);
	ret = ft_printf("%05d", -50);
	after(ret);

	before();
	ret = printf("%hd", 32767);
	between(ret);
	ret = ft_printf("%hd", 32767);
	after(ret);

	before();
	ret = printf("%hd", -32768);
	between(ret);
	ret = ft_printf("%hd", -32768);
	after(ret);

	before();
	ret = printf("%hd", 32768);
	between(ret);
	ret = ft_printf("%hd", 32768);
	after(ret);

	before();
	ret = printf("%hd", -32769);
	between(ret);
	ret = ft_printf("%hd", -32769);
	after(ret);

	before();
	ret = printf("%hhd", 127);
	between(ret);
	ret = ft_printf("%hhd", 127);
	after(ret);

	before();
	ret = printf("%hhd", 127);
	between(ret);
	ret = ft_printf("%hhd", 127);
	after(ret);

	before();
	ret = printf("%hhd", 128);
	between(ret);
	ret = ft_printf("%hhd", 128);
	after(ret);

	before();
	ret = printf("%hhd", -128);
	between(ret);
	ret = ft_printf("%hhd", -128);
	after(ret);

	before();
	ret = printf("%hhd", 127);
	between(ret);
	ret = ft_printf("%hhd", 127);
	after(ret);

	before();
	ret = printf("%hhd", -129);
	between(ret);
	ret = ft_printf("%hhd", -129);
	after(ret);

	before();
	ret = printf("%ld", 2147483647);
	between(ret);
	ret = ft_printf("%ld", 2147483647);
	after(ret);

	before();
	ret = printf("%ld", -2147483648);
	between(ret);
	ret = ft_printf("%ld", -2147483648);
	after(ret);

	before();
	ret = printf("%hhd", 127);
	between(ret);
	ret = ft_printf("%hhd", 127);
	after(ret);

	before();
	ret = printf("%ld", 2147483648);
	between(ret);
	ret = ft_printf("%ld", 2147483648);
	after(ret);

	before();
	ret = printf("%ld", -2147483649);
	between(ret);
	ret = ft_printf("%ld", -2147483649);
	after(ret);

	before();
	ret = printf("%lld", 9223372036854775807);
	between(ret);
	ret = ft_printf("%lld", 9223372036854775807);
	after(ret);

	before();
	ret = printf("%lld", -9223372036854775808);
	between(ret);
	ret = ft_printf("%lld", -9223372036854775808);
	after(ret);


	before();
	ret = printf("%jd", 9223372036854775807);
	between(ret);
	ret = ft_printf("%jd", 9223372036854775807);
	after(ret);


	before();
	ret = printf("%jd", -9223372036854775808);
	between(ret);
	ret = ft_printf("%jd", -9223372036854775808);
	after(ret);


	before();
	ret = printf("%zd", 4294967295);
	between(ret);
	ret = ft_printf("%zd", 4294967295);
	after(ret);


	before();
	ret = printf("%zd", 4294967296);
	between(ret);
	ret = ft_printf("%zd", 4294967296);
	after(ret);


	before();
	ret = printf("%zd", -0);
	between(ret);
	ret = ft_printf("%zd", -0);
	after(ret);

	before();
	ret = printf("%d", 1);
	between(ret);
	ret = ft_printf("%d", 1);
	after(ret);

	before();
	ret = printf("%d %d", 1, -2);
	between(ret);
	ret = ft_printf("%d %d", 1, -2);
	after(ret);

	before();
	ret = printf("%d %d %d %d gg!", 1, -2, 33, 42, 0);
	between(ret);
	ret = ft_printf("%d %d %d %d gg!", 1, -2, 33, 42, 0);
	after(ret);

	before();
	ret = printf("%4.15d", 42);
	between(ret);
	ret = ft_printf("%4.15d", 42);
	after(ret);

	before();
	ret = printf("%.2d", 4242);
	between(ret);
	ret = ft_printf("%.2d", 4242);
	after(ret);

	before();
	ret = printf("%.10d", 4242);
	between(ret);
	ret = ft_printf("%.10d", 4242);
	after(ret);

	before();
	ret = printf("%10.5d", 4242);
	between(ret);
	ret = ft_printf("%10.5d", 4242);
	after(ret);

	before();
	ret = printf("%-10.5d", 4242);
	between(ret);
	ret = ft_printf("%-10.5d", 4242);
	after(ret);

	before();
	ret = printf("% 10.5d", 4242);
	between(ret);
	ret = ft_printf("% 10.5d", 4242);
	after(ret);

	before();
	ret = printf("%+10.5d", 4242);
	between(ret);
	ret = ft_printf("%+10.5d", 4242);
	after(ret);

	before();
	ret = printf("%-+10.5d", 4242);
	between(ret);
	ret = ft_printf("%-+10.5d", 4242);
	after(ret);

	before();
	ret = printf("%03.2d", -1);
	between(ret);
	ret = ft_printf("%03.2d", -1);
	after(ret);

	before();
	ret = printf("@moulitest: %.10d", -42);
	between(ret);
	ret = ft_printf("@moulitest: %.10d", -42);
	after(ret);

	before();
	ret = printf("@moulitest: %.d %.0d", 0, 0);
	between(ret);
	ret = ft_printf("@moulitest: %.d %.0d", 0, 0);
	after(ret);

	before();
	ret = printf("@moulitest: %5.d %5.0d", 0, 0);
	between(ret);
	ret = ft_printf("@moulitest: %5.d %5.0d", 0, 0);
	after(ret);

	printf("\n-------------------------------\n");
}
