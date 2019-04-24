/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_buf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:22:55 by solefir           #+#    #+#             */
/*   Updated: 2019/04/24 14:20:37 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_buf(t_printf *global)
{
	if (global->buf_size > 0)
		write(1, global->buf, global->buf_size);
	global->buf_size = 0;
}


void	print_buf_and_form(t_printf *global, char *str, int len)
{
	print_buf(global);
	write(1, str, len);
	global->ret += len;
}
