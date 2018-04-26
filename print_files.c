/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_files.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:59:00 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 06:54:22 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_files(t_file *file)
{
	t_file	*tmp;

	tmp = file;
	while (tmp)
	{
		ft_printf("%s\n", tmp->name);
		tmp = tmp->next;
	}
}
