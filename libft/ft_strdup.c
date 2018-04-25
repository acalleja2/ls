/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:51:11 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:34:10 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*tab;

	if (s1)
	{
		i = 0;
		len = ft_strlen(s1);
		tab = (char *)ealloc(sizeof(char) * len + 1);
		if (tab == NULL)
			return (NULL);
		while (s1[i])
		{
			tab[i] = s1[i];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
