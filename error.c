/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:09:50 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 22:47:55 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	error_usage(void)
{
	ft_printf("usage: ./ls [-lRart] [file ...]\n");
	exit(EXIT_FAILURE);
}

void	error_dir(void)
{
	ft_printf("No current directory\n");
	exit(EXIT_FAILURE);
}

void	error_stat(void)
{
	ft_printf("Error stat\n");
	exit(EXIT_FAILURE);
}
