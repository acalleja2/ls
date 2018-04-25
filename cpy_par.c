/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_par.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 23:12:33 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 23:15:36 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	cpy_par(t_param *par, t_param *cpy)
{
	cpy->a = par->a;
	cpy->l = par->l;
	cpy->br = par->br;
	cpy->r = par->r;
	cpy->t = par->t;
	cpy->file = NULL;
}
