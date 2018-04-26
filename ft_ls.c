/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:15:49 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/26 05:25:57 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	int		i;
	t_param	*par;

	par = (t_param *)ealloc(sizeof(t_param));
	init_par(par);
	i = 1;
	while (i < argc)
	{
		pars_arg(argv[i], par);
		i++;
	}
	if (!par->file)
		add_all_files(par, "./");
	run_option(par);
	return (0);
}
