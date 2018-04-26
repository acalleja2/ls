/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_par_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 00:14:54 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 00:19:40 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Free la structure param et toutes ses composantes
 */
void	free_par(t_param *par)
{
	t_file	*tmp;

	tmp = par->file;
	while (par->file)
	{
		tmp = tmp->next;
		free(par->file->name);
		free(par->file);
		par->file = tmp;
	}
	free(par);
}

