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
	ret = printf(" my str%%1235%%ksda");
	between(ret);
	ret = ft_printf(" my str%%1235%%ksda");
	after(ret);

	before();
	ret = printf("%.2s is a string", "this");
	between(ret);
	ret = ft_printf("%.2s is a string", "this");
	after(ret);

	before();
	ret = printf("%10s is a string", "this");
	between(ret);
	ret = ft_printf("%10s is a string", "this");
	after(ret);

	before();
	ret = printf("%5.2s is a string", "this");
	between(ret);
	ret = ft_printf("%5.2s is a string", "this");
	after(ret);

	before();
	ret = printf("%10s is a string", "");
	between(ret);
	ret = ft_printf("%10s is a string", "");
	after(ret);

	before();
	ret = printf("%.2s is a string", "");
	between(ret);
	ret = ft_printf("%.2s is a string", "");
	after(ret);

	before();
	ret = printf("%5.2s is a string", "");
	between(ret);
	ret = ft_printf("%5.2s is a string", "");
	after(ret);

	before();
	ret = printf("%-10s is a string", "this");
	between(ret);
	ret = ft_printf("%-10s is a string", "this");
	after(ret);

	before();
	ret = printf("%-.2s is a string", "this");
	between(ret);
	ret = ft_printf("%-.2s is a string", "this");
	after(ret);

	before();
	ret = printf("%-5.2s is a string", "this");
	between(ret);
	ret = ft_printf("%-5.2s is a string", "this");
	after(ret);

	before();
	ret = printf("%-10s is a string", "");
	between(ret);
	ret = ft_printf("%-10s is a string", "");
	after(ret);

	before();
	ret = printf("%-.2s is a string", "");
	between(ret);
	ret = ft_printf("%-.2s is a string", "");
	after(ret);

	before();
	ret = printf("%s %s", "this", "is");
	between(ret);
	ret = ft_printf("%s %s", "this", "is");
	after(ret);

	before();
	ret = printf("%s %s %s", "this", "is", "a");
	between(ret);
	ret = ft_printf("%s %s %s", "this", "is", "a");
	after(ret);

	before();
	ret = printf("%s %s %s %s", "this", "is", "a", "multi");
	between(ret);
	ret = ft_printf("%s %s %s %s", "this", "is", "a", "multi");
	after(ret);

	before();
	ret = printf("%s%s%s%s%s", "this", "is", "a", "is", "a", "multi", "string");
	between(ret);
	ret = ft_printf("%s%s%s%s%s", "this", "is", "a", "is", "a", "multi", "string");
	after(ret);

	before();
	ret = printf("@moulitest: %s", NULL);
	between(ret);
	ret = ft_printf("@moulitest: %s", NULL);
	after(ret);

	before();
	ret = printf("%.2c", NULL);
	between(ret);
	ret = ft_printf("%.2c", NULL);
	after(ret);

	before();
	ret = printf("%s %s", NULL, "string");
	between(ret);
	ret = ft_printf("%s %s", NULL, "string");
	after(ret);

	before();
	ret = printf("%012s", "string");
	between(ret);
	ret = ft_printf("%012s", "string");
	after(ret);


	printf("\n-------------------------------\n");
}
