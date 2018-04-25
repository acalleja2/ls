/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   br_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 22:23:09 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 23:08:31 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Cherche le premier dossier a la racine du ls et lance la recursive
 */
void	br_ls(t_param *par)
{
	struct stat	file_stat;
	t_file		*tmp;
	char		*path;

	tmp = par->file;
	while (tmp)
	{
		if (stat(tmp->name, &file_stat) < 0)
			error_stat();
		if (S_ISDIR(file_stat.st_mode))
		{
			path = ft_strjoin(tmp->name, "/");
			rec_ls(path);
			break;
		}
		tmp = tmp->next;
	}
}
