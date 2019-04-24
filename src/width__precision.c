/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width__precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:47:09 by solefir           #+#    #+#             */
/*   Updated: 2019/04/24 20:48:56 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	width(t_flags *flags, t_printf *global)
{
	int	i;

	i = flags->width - flags->precision - (int)global->len_ndr - flags->negative;
	if (i <= 0)
	{
		flags->have_width = 0;
		flags->width = 0;
	}
	else
		flags->width = i;
}

void	precision(t_flags *flags, t_printf *global)
{
	int	i;

	i = flags->precision - (int)global->len_nbr;
	if (i <= 0)
	{
		flags->have_precision = 0;
		flags->precision = 0;
	}
	else
		flags->precision = i;
}
