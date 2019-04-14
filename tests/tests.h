#ifndef  TESTS_H
# define TESTS_H

# include "ft_printf.h"
# include <stdio.h>

void before();
void between(int ret);
void after(int ret);

void	type_d(void);
void	type_c(void);
void	type_u(void);
void	type_str(void);

#endif