/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_o.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:22:00 by solefir           #+#    #+#             */
/*   Updated: 2019/04/25 22:01:08 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*oct_or_not_oct(t_flags *flags, size_t nbr, size_t *len, const _Bool x)
{
	if (nbr == 0)
		flags->hash = 0;
	
	if (nbr == 0 && flags->have_precision && !flags->precision)
	{
		*len = 0;
		return (NULL);
	}
	return (itoa(nbr, len, 8, x));
}	

void			type_o(t_printf *global, t_flags *flags)
{
	size_t		len_n;
	char		*oct;

	oct = oct_or_not_oct(flags, unsigned_nbr(flags, global->ap), &len_n, 0);
	precision_count(flags, len_n);
	width_count(flags, len_n, (flags->hash ? 2 : 0));
	if (!flags->minus && !flags->zero && flags->have_width)
		add_in_buf_char(global, flags->width_char, flags->width);
	if (flags->hash)
		add_in_buf_str(global, (char*)oct, 1);
	if (!flags->minus && flags->zero && flags->have_width)
		add_in_buf_char(global, flags->width_char, flags->width);
	if (flags->have_precision)
		add_in_buf_char(global, '0', flags->precision);
	if (len_n)
		add_in_buf_str(global, (char*)oct, len_n);
	if (flags->minus && flags->have_width)
		add_in_buf_char(global, flags->width_char, flags->width);
	if (len_n)
		free(oct);
}
