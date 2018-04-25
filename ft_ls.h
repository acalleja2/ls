/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalleja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:17:11 by acalleja          #+#    #+#             */
/*   Updated: 2018/04/25 23:15:30 by acalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include <dirent.h>
# include "libft/libft.h"
# include "sys/stat.h"
/*
 * * struct de la liste des fichiers
 */
typedef struct		s_file
{
	char			*name;
	struct s_file	*next;
}					t_file;

/*
 * * Boleen des param de ls et liste des fichiers/dossiers
 */
typedef struct		s_param
{
	int				l;
	int				br;
	int				r;
	int				a;
	int				t;
	t_file			*file;
}					t_param;

/*
 * * fonction d'erreur, exit apres le message d erreur
 */
void				error_usage(void);
void				error_dir(void);
void				error_stat(void);

/*
 * * Parsing des arguments options/file/dossiers
 */
void				init_par(t_param *par);
void				pars_arg(char *str, t_param *par);
void				up_flag(t_param *par, char *str);
void				add_file(t_param *par, char *str);
void				add_all_files(t_param *par, char *path);

/*
 * * Fonction d'affichage des listes
 */
void				print_files(t_file *file);

/*
 * * Direction selon les options
 */
void				run_option(t_param *par);

/*
 * * Dirige les fichiers/fossiers selon les options.
 */
void				run_option(t_param *par);
void				br_ls(t_param *par);
void				t_ls(t_param *par);
void				r_ls(t_param *par);
void				l_ls(t_param *par);

/*
 * * Option R en recurssif
 */
void				cpy_par(t_param *par, t_param *cpy);
void				rec_ls(char *path);

#endif
