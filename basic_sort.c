/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 02:09:31 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 04:52:21 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Renvoie la taille de la liste
 */
int		count_file_lst(t_file *file)
{
	int		i;
	t_file	*tmp;

	tmp = file;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/*
 * * Tri a bulle d'une liste par ordre ASCII
 */
void	basic_sort(t_file **file)
{
	t_file	*tmp;
	char	*tmp_str;

	tmp = *file;
	while (tmp->next)
	{
		if (ft_strcmp(tmp->name, tmp->next->name) > 0)
		{
			tmp_str = tmp->name;
			tmp->name = tmp->next->name;
			tmp->next->name = tmp_str;
			tmp = *file;
		}
		else
			tmp = tmp->next;
	}
	if (!check_sort(*file))
		basic_sort(file);
	tmp = *file;
}

/*
 * * Verifie si la liste est triee
 */
int		check_sort(t_file *file)
{
	t_file	*tmp;

	tmp = file;
	while (tmp->next)
	{
		if (ft_strcmp(tmp->name, tmp->next->name) > 0)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

