/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:26:03 by solefir           #+#    #+#             */
/*   Updated: 2019/04/14 18:45:57 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

static void		width_or_precision(t_printf *global, t_flags *flags)
{
	(void)global;
	(void)flags;
	global->iter_frm++;
}

static void 	find_flags(t_printf *global, t_flags *flags)
{
	char c;

	c = global->form[global->iter_frm];
	while (c == ' ' || c == '#' || c == '+' || c == '-' || c == '.' ||
			c == '*' || (c >= '0' && c <= '9') ||
			c == 'h' || c == 'l' || c == 'j' || c == 'z')
	{
		if (c == ' ' || c == '#' || c == '+' || c == '-' || c == '0' ||
		c == 'h' || c == 'l' || c == 'j' || c == 'z')
		{
			get_flags(flags, c);
			global->iter_frm++;
		}
		else
			width_or_precision(global, flags);
		c = global->form[global->iter_frm];
	}
}

void		parse_arg(t_printf *global)
{
	t_flags flags;

	ft_bzero(&flags, sizeof(t_flags));
	find_flags(global, &flags);
}
