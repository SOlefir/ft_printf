/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:00:37 by solefir           #+#    #+#             */
/*   Updated: 2019/04/22 17:44:28 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# define PRINTF_BUFF_SIZE 5

typedef struct s_printf	t_printf;
typedef struct s_flags	t_flags;

struct	s_printf
{
	int		iter_frm;
	int		buf_size;
	int		ret;
	char* 	form;
	char* 	buf;
	va_list	ap;
};

struct 	s_flags
{
	unsigned char	space : 1;
	unsigned char	hash : 1;
	unsigned char	plus : 1;
	unsigned char	minus : 1;
	unsigned char	zero : 1;
	unsigned char	have_precision : 1;
	unsigned char	have_width : 1;
	unsigned char	negative : 1;
	unsigned char	hh : 1;
	unsigned char	h : 1;
	unsigned char	l : 1;
	unsigned char	ll : 1;
	unsigned char	j : 1;
	unsigned char	z : 1;

	int				h_counter;
	int				l_counter;
	int			precision;
	int			width;
	char			width_char;
};

int     ft_printf(char *format, ...);
void	print_buf_and_form(t_printf *global, char *str, int len);
void	parse_arg(t_printf *global);


#endif