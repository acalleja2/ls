/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ls.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 03:24:28 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 06:53:43 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	t_ls(t_param *par)
{
	t_file	*tmp;
	char	*name;
	int		time;

	tmp = par->file;
	while (tmp->next)
	{
		if (tmp->timestamp - tmp->next->timestamp < 0)
		{
			name = tmp->name;
			time = tmp->timestamp;
			tmp->name = tmp->next->name;
			tmp->timestamp = tmp->next->timestamp;
			tmp->next->name = name;
			tmp->next->timestamp = time;
			tmp = par->file;
		}
		else
			tmp = tmp->next;
	}
}

int		check_time(t_file *file)
{
	t_file	*tmp;

	tmp = file;
	while (tmp->next)
	{
		if (tmp->timestamp - tmp->next->timestamp < 0)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
