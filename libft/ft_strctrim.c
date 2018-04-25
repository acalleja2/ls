/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 22:04:18 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:34:09 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_trim(char const *s, int i, char c, int j)
{
	char	*mem;
	int		k;

	k = 0;
	while (s[i] == c)
		i++;
	while ((s[j - 1] == c) && j > 0)
		j--;
	if (i >= j)
	{
		if (!(mem = (char *)ealloc(sizeof(char) * 2)))
			return (NULL);
		mem[0] = '\0';
		return (mem);
	}
	if (!(mem = (char *)ealloc(sizeof(char) * (j - i + 1))))
		return (NULL);
	while (i < j)
		mem[k++] = s[i++];
	mem[k] = '\0';
	return (mem);
}

char			*ft_strctrim(char const *s, char c)
{
	int		j;
	char	*mem;

	if (s)
	{
		j = ft_strlen(s);
		mem = ft_trim(s, 0, c, j);
		return (mem);
	}
	return (NULL);
}
