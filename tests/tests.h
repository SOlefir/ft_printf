#ifndef  TESTS_H
# define TESTS_H
# define LONG_MAX 9223372036854775808U

# include "ft_printf.h"
# include <stdio.h>

void before();
void between(int ret);
void after(int ret);

void	type_dec(void);
void	type_char(void);
void	type_unsigned(void);
void	type_str(void);
void	type_xeh(void);
void	type_oct(void);
void	type_float(void);
void	type_pointer(void);

#endif