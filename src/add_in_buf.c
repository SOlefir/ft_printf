/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_in_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:02:08 by solefir           #+#    #+#             */
/*   Updated: 2019/04/24 15:39:59 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	add_in_buf_nbr(t_printf *global)
{
	while (global->len_nbr > 0)
	{
		if (global->buf_size == PRINTF_BUFF_SIZE)
			print_buf(global);
		global->buf[global->buf_size] = nbr(global) ;
		count--;
		i++;
		global->buf_size++;
		global->ret++;
	}
}

void	add_in_buf_str(t_printf *global, char *str, int len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		if (global->buf_size == PRINTF_BUFF_SIZE)
			print_buf(global);
		global->buf[global->buf_size] = str[i];
		count--;
		i++;
		global->buf_size++;
		global->ret++;
	}
}

void	add_in_buf_char(t_printf *global, char c, int count)
{
	while (count > 0)				
	{
		if (global->buf_size == PRINTF_BUFF_SIZE)
			print_buf(global);
		global->buf[global->buf_size] = c;
		count--;
		global->buf_size++;
		global->ret++;
	}
}
