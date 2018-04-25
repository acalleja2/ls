/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_all_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 21:24:51 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 23:11:22 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
/*
 * * si on ne specifie pas de fichier/dossier les recupere tous.
 */
void	add_all_files(t_param *par, char *path)
{
	DIR				*rep;
	struct dirent	*file;

	if ((rep = opendir(path)) == NULL)
	{
		error_dir();
	}
	while ((file = readdir(rep)))
	{
		if ((par->a == 0 && file->d_name[0] != '.') || par->a == 1)
			add_file(par, file->d_name);
	}
	closedir(rep);
}
