/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:59:00 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 21:51:29 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_files(t_file *file)
{
	t_file	*tmp;

	tmp = file;
	while (tmp && tmp->next)
	{
		ft_printf("%s -> ", tmp->name);
		tmp = tmp->next;
	}
	if (tmp)
		ft_printf("%s\n", tmp->name);
}
