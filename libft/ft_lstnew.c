/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 23:19:19 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 20:49:29 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list *)ealloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		list->content = NULL;
	}
	else
	{
		if (!(list->content = ft_memalloc(content_size)))
		{
			ft_memdel((void **)&list);
			return (NULL);
		}
		ft_memcpy(list->content, content, content_size);
	}
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
