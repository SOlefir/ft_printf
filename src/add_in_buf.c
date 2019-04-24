/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_in_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:02:08 by solefir           #+#    #+#             */
/*   Updated: 2019/04/24 17:57:39 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	add_in_buf_nbr(t_printf *global)
{
	while (global->len_nbr > 0)
	{
		if (global->buf_size == PRINTF_BUFF_SIZE &&
			global->buf_size + global->len_nbr >= PRINTF_BUFF_SIZE)
			print_buf(global);
		global->buf[global->len_nbr] = '0' + (global->nbr % 10);
		global->nbr = global->nbr / 10;
		global->len_nbr--;
		global->buf_size++;
		global->ret++;
	}
}

void	add_in_buf_str(t_printf *global, char *str, int len) //нужна переменная, где будет храниться строка с ва арг
{
	int	i;

	i = 0;
	while (len > 0)
	{
		if (global->buf_size == PRINTF_BUFF_SIZE)
			print_buf(global);
		global->buf[global->buf_size] = str[i];
		len--;
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
