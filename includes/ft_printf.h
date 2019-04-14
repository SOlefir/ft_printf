/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:00:37 by solefir           #+#    #+#             */
/*   Updated: 2019/04/12 21:26:26 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# define PRINTF_BUFF_SIZE 5

typedef struct s_printf	t_printf;

struct	s_printf
{
	int		iter_frm;
	int		buf_size;
	int		ret;
	char* 	form;
	char* 	buf;
	va_list	ap;
};

int     ft_printf(char *format, ...);

#endif