/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_in_buf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 17:02:08 by solefir           #+#    #+#             */
/*   Updated: 2019/04/23 19:22:48 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	add_in_buf(t_printf *global, char c, int count)
{
	while (count < 0)				
	{
		if (global->buf_size == PRINTF_BUFF_SIZE)
			print_buf(global);
		global->buf[global->buf_size] = c;
		coutn--;
		global->buf_size++;
	}
}
