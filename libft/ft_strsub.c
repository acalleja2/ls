/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 04:41:07 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:34:14 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (s)
	{
		if (!(mem = (char *)ealloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (i < len)
		{
			mem[i] = s[start];
			i++;
			start++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
