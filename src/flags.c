/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 18:05:50 by solefir           #+#    #+#             */
/*   Updated: 2019/04/22 18:32:16 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static 

static void		width(t_printf *global, t_flags *flags)
{
	size_t	nb;

	nb = 0;
	flags->have_width = 1;
	while (global->form[global->iter_frm] >= '0' && 
			global->form[global->iter_frm] <= '9')
	{
		nb = nb * 10 + (global->form[global->iter_frm] - '0');
		global->iter_frm++;
	}
	flags->width = (int)nb;
}

static void		precision(t_printf *global, t_flags *flags)
{
	size_t	nb;

	nb = 0;
	flags->have_precision = 1;
	global->iter_frm++;
	while (global->form[global->iter_frm] == '0')
			global->iter_frm++;
	while (global->form[global->iter_frm] >= '0' && 
			global->form[global->iter_frm] <= '9')
	{
		nb = nb * 10 + (global->form[global->iter_frm] - '0');
		global->iter_frm++;
	}
	flags->precision = (int)nb;
}


static void		get_flags(t_flags *flags, char c)
{
	if (c == '#')
		flags->hash = 1;
	else if (c == '0')
		flags->zero = 1;
	else if (c == '-')
		flags->minus = 1;
	else if (c == '+')
		flags->plus = 1;
	else if (c == ' ')
		flags->space = 1;
	else if (c == 'h')
		flags->h_counter++;
	else if (c == 'l')
		flags->l_counter++;
	else if (c == 'j')
		flags->j = 1;
	else
		flags->z = 1;
}

void 	find_flags(t_printf *global, t_flags *flags)
{
	char c;

	c = global->form[global->iter_frm];
	while (c == ' ' || c == '#' || c == '+' || c == '-' || c == '.' ||
		(c >= '0' && c <= '9') || c == 'h' || c == 'l' || c == 'j' || c == 'z')
	{
		if (c == ' ' || c == '#' || c == '+' || c == '-' || c == '0' ||
		c == 'h' || c == 'l' || c == 'j' || c == 'z')
		{
			get_flags(flags, c);
			global->iter_frm++;
		}
		else if (c == '.') 
			precision(global, flags);
		else
			width(global, flags);
		c = global->form[global->iter_frm];
	}

}
