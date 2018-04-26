/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   br_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 22:23:09 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 06:04:11 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Renvoie 1 si c est un dossier et 0 sinon. Donne le type de fichier et les
 * * timestamp.
 */
int		get_data(char *path, t_file *file)
{
	struct stat	file_stat;
	char		*pat;

	pat = ft_strjoin(path, file->name);
	if (stat(pat, &file_stat) < 0)
		error_stat();
	file->timestamp = ft_atoi(ctime(&file_stat.st_mtime));
	if (S_ISDIR(file_stat.st_mode))
		return (1);
	return (0);
}

/*
 * * Fonction reccursive avance dans les dossiers
 */
void	br_ls(char *path, t_param **par)
{
	t_param	*cpy;
	t_file	*tmp;
	char	*pat;
	char	*pat_tmp;

	cpy = (t_param *)ealloc(sizeof(t_param));
	cpy_par(*par, cpy);
	add_all_files(cpy, path);
	put_data(path, &cpy);
	print_rec(cpy, path);
	put_data(path, &cpy);
	tmp = cpy->file;
	while (tmp)
	{
		if (ft_strcmp(".", tmp->name) && ft_strcmp("..", tmp->name) &&
			tmp->type == 'd')
		{
			pat = ft_strjoin(tmp->name, "/");
			pat_tmp = pat;
			pat = ft_strjoin(path, pat);
			free(pat_tmp);
			br_ls(pat, par);
		}
		tmp = tmp->next;
	}
}

void	put_data(char *path, t_param **par)
{
	t_file	*tmp;
	struct stat	file_stat;
	char		*pat;

	tmp = (*par)->file;
	while (tmp)
	{
		pat = ft_strjoin(path, tmp->name);
		if (stat(pat, &file_stat) < 0)
			error_stat();
		tmp->timestamp = file_stat.st_atime;
		if (S_ISDIR(file_stat.st_mode) == 1)
			tmp->type = 'd';
		else
			tmp->type = '-';
		tmp = tmp->next;
	}
}
