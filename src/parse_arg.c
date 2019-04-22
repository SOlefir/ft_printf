/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solefir <solefir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:26:03 by solefir           #+#    #+#             */
/*   Updated: 2019/04/22 19:44:11 by solefir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void		parse_arg(t_printf *global)
{
	t_flags flags;

	ft_bzero(&flags, sizeof(t_flags));
	find_flags(global, &flags);
}
