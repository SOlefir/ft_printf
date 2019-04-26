/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 20:46:22 by solefir           #+#    #+#             */
/*   Updated: 2019/04/26 17:20:04 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		specifier(t_printf *global, t_flags *flags)
{
	char	c;
	c = global->form[global->iter_frm]; 
	if (c == 'd' || c == 'D' || c == 'i')
		type_di(global, flags);
	else if (c == 'u' || c == 'U')
		type_u(global, flags);
	else if (c == 'o' || c == 'O')
		type_oct(global, flags);
	else if (c == 'x' || c == 'X')
		type_x(global, flags);
	else if (c == 'p')
		type_point(global, flags);
	else if (c == 'f')
		type_f(global, flags);
	else if (c == 's')
		type_s(global, flags);	
	else if (c != 0)
		type_c(global, flags);
}
