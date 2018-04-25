/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 21:02:31 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:34:08 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *tmp, int i)
{
	char	*new;
	int		k;
	int		len;

	k = 0;
	len = ft_strlen(tmp) - i;
	new = (char *)ealloc(sizeof(char) * len + 1);
	while (k < len)
	{
		new[k] = tmp[i];
		i++;
		k++;
	}
	new[k] = '\0';
	return (new);
}
