/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:53:31 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/16 15:40:55 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**start_parser(int argc, char **argv)
{
	size_t	i;
	char	*tmp_str;
	char	*join_nb;
	char	**tab_nb;

	tmp_str = NULL;
	join_nb = NULL;
	i = 1;
	while ((int)i < (argc - 1))
	{
		tmp_str = ft_strjoin(join_nb, argv[i]);
		if (join_nb)
			free (join_nb);
		join_nb = ft_strdup(tmp_str);
		free (tmp_str);
		i++;
	}
	tab_nb = ft_split(join_nb, ' ');
	return (tab_nb);
}

int	main(int argc, char **argv)
{
	size_t	i;
	char	**tabstr;

	i = 0;
	tabstr = start_parser(argc, argv);
	while (*tabstr[i])
	{
		ft_printf("[%s]\n", *tabstr[i]);
		i++;
	}
}