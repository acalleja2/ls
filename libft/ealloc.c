/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ealloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:55:18 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:34:43 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ealloc(size_t size)
{
	void	*res;

	if (size == 0)
		return (NULL);
	res = malloc(size);
	if (res == NULL)
	{
		ft_printf("ealloc error\n");
		exit(EXIT_FAILURE);
	}
	return (res);
}
