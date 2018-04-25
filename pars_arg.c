/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:01:27 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:58:00 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Parcourt le parametre et recup les flags
 */
void	pars_arg(char *str, t_param *par)
{
	if (str[0] == '-')
	{
		str += 1;
		up_flag(par, str);
	}
	else
	{
		add_file(par, str);
	}
}

/*
 * * allume les flags
 */
void	up_flag(t_param *par, char *str)
{
	while (str[0])
	{
		if (str[0] == 'l')
			par->l = 1;
		else if (str[0] == 'R')
			par->br = 1;
		else if (str[0] == 'r')
			par->r = 1;
		else if (str[0] == 'a')
			par->a = 1;
		else if (str[0] == 't')
			par->t = 1;
		else
			error_usage();
		str += 1;
	}
}

/*
 * * ajoute un fichier/dossier dans la liste de la structure param en push_front
 */
void	add_file(t_param *par, char *str)
{
	t_file		*tmp;

	if (par->file == NULL)
	{
		par->file = (t_file *)ealloc(sizeof(t_file));
		par->file->name = ft_strdup(str);
		par->file->next = NULL;
	}
	else
	{
		tmp = (t_file *)ealloc(sizeof(t_file));
		tmp->name = ft_strdup(str);
		tmp->next = par->file;
		par->file = tmp;
	}
}
