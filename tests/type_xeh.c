/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_xeh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:26:16 by solefir           #+#    #+#             */
/*   Updated: 2019/04/25 17:21:59 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	type_xeh(void)
{
	int ret;
	
	printf("\n----------- type x ------------\n");

	before();
	ret = printf("%x", 42);
	between(ret);
	ret = ft_printf("%x", 42);
	after(ret);

	before();
	ret = printf("%X", 42);
	between(ret);
	ret = ft_printf("%X", 42);
	after(ret);

	before();
	ret = printf("%x", 0);
	between(ret);
	ret = ft_printf("%x", 0);
	after(ret);

	before();
	ret = printf("%x", -42);
	between(ret);
	ret = ft_printf("%x", -42);
	after(ret);

	before();
	ret = printf("%X", -42);
	between(ret);
	ret = ft_printf("%X", -42);
	after(ret);

	before();
	ret = printf("%x", 4294967296);
	between(ret);
	ret = ft_printf("%x", 4294967296);
	after(ret);

	before();
	ret = printf("%X", 4294967296);
	between(ret);
	ret = ft_printf("%X", 4294967296);
	after(ret);

	before();
	ret = printf("%x", "test");
	between(ret);
	ret = ft_printf("%x", "test");
	after(ret);

	before();
	ret = printf("%10x", 42);
	between(ret);
	ret = ft_printf("%10x", 42);
	after(ret);

	before();
	ret = printf("%-10x", 42);
	between(ret);
	ret = ft_printf("%-10x", 42);
	after(ret);


	before();
	ret = printf("%lx", 4294967296);
	between(ret);
	ret = ft_printf("%lx", 4294967296);
	after(ret);

	before();
	ret = printf("%llX", 4294967296);
	between(ret);
	ret = ft_printf("%llX", 4294967296);
	after(ret);

	before();
	ret = printf("%hx", 4294967296);
	between(ret);
	ret = ft_printf("%hx", 4294967296);
	after(ret);

	before();
	ret = printf("%hhX", 4294967296);
	between(ret);
	ret = ft_printf("%hhX", 4294967296);
	after(ret);

	before();
	ret = printf("%jx", 4294967295);
	between(ret);
	ret = ft_printf("%jx", 4294967295);
	after(ret);

	before();
	ret = printf("%-10x", 42);
	between(ret);
	ret = ft_printf("%-10x", 42);
	after(ret);


	before();
	ret = printf("%lx", 4294967296);
	between(ret);
	ret = ft_printf("%lx", 4294967296);
	after(ret);

	before();
	ret = printf("%llX", 4294967296);
	between(ret);
	ret = ft_printf("%llX", 4294967296);
	after(ret);

	before();
	ret = printf("%hx", 4294967296);
	between(ret);
	ret = ft_printf("%hx", 4294967296);
	after(ret);

	before();
	ret = printf("%hhX", 4294967296);
	between(ret);
	ret = ft_printf("%hhX", 4294967296);
	after(ret);

	before();
	ret = printf("%jx", 4294967295);
	between(ret);
	ret = ft_printf("%jx", 4294967295);
	after(ret);

	before();
	ret = printf("%jx", 4294967296);
	between(ret);
	ret = ft_printf("%jx", 4294967296);
	after(ret);


	before();
	ret = printf("%jx", -4294967296);
	between(ret);
	ret = ft_printf("%jx", -4294967296);
	after(ret);

	before();
	ret = printf("%jx", -4294967297);
	between(ret);
	ret = ft_printf("%jx", -4294967297);
	after(ret);

	before();
	ret = printf("%llx", 9223372036854775807);
	between(ret);
	ret = ft_printf("%llx", 9223372036854775807);
	after(ret);

	before();
	ret = printf("%llx", 9223372036854775808);
	between(ret);
	ret = ft_printf("%llx", 9223372036854775808);
	after(ret);

	before();
	ret = printf("%010x", 542);
	between(ret);
	ret = ft_printf("%010x", 542);
	after(ret);

	printf("\n-------------------------------\n");
}
