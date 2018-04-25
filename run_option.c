/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_option.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 22:07:50 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 22:55:39 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Gere les priorites sur les options
 */
void	run_option(t_param *par)
{
	if (par->br == 1)
		br_ls(par);
	/*if (par->t == 1)
		t_ls(par);
	if (par->r == 1)
		r_ls(par);
	if (par->l == 1)
		l_ls(par);*/
}
