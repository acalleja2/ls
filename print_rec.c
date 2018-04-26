/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 00:00:16 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 02:56:35 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
 * * Permet de faire toutes les options sur chaque dossier.
 */
void	print_rec(t_param *par, char *dir)
{
	char	*tmp;

	tmp = ft_strdup(dir);
	basic_sort(&par->file);
	/*if (par->t == 1)
		t_ls(par);
	if (par->r == 1)
		r_ls(par);
	if (par->l == 1)
		l_ls(par);*/
	if (ft_strcmp(dir, "./"))
	{
		ft_putchar('\n');
		ft_printf("%s:\n", del_last_c(tmp));
	}
	print_files(par->file);
	free(tmp);
}

/*
 * * Supprime le dernier caractere de la chaine
 */
char	*del_last_c(char *str)
{
	int		len;
	char	*tmp;

	len = ft_strlen(str);
	str[len - 1] = '\0';
	return (str);
}
