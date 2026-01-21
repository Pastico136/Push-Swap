/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:53:31 by parenvoi          #+#    #+#             */
/*   Updated: 2026/01/21 15:44:15 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_null_empty(int argc, char **argv)
{
	int	index;
	int	j;
	int	flag;

	if (!argv)
		return (1);
	index = 1;
	while (index < argc)
	{
		if (!(argv[index][0]))
			return (1);
		j = 0;
		flag = 1;
		while (argv[index][j])
			if (ft_isdigit(argv[index][j++]))
				flag = 0;
		if (flag)
			return (1);
		index++;
	}
	return (0);
}

// split_arg = split join all arg, remove space and split all nb

char	**split_arg(int argc, char **argv)
{
	int		i;
	char	*tmp_str;
	char	*join_nb;
	char	**tab_nb;

	tmp_str = NULL;
	join_nb = NULL;
	i = 1;
	while (i < (argc))
	{
		tmp_str = ft_strjoin(join_nb, argv[i]);
		if (join_nb)
			free(join_nb);
		join_nb = ft_strjoin(tmp_str, " ");
		free(tmp_str);
		i++;
	}
	tab_nb = ft_split(join_nb, ' ');
	free(join_nb);
	if (!tab_nb || !tab_nb[0])
		return (0);
	return (tab_nb);
}

// parser = Check all char and check all sign and position

int	parser(char **tabstr)
{
	int	i;
	int	j;

	i = 0;
	while (tabstr[i])
	{
		j = 0;
		while (tabstr[i][j])
		{
			if (!(tabstr[i][j] >= '0' && tabstr[i][j] <= '9')
				&& tabstr[i][j] != '+' && tabstr[i][j] != '-')
				return (1);
			if (j != 0 && (tabstr[i][j] == '+' || tabstr[i][j] == '-'))
				return (1);
			if ((tabstr[i][j] == '+' || tabstr[i][j] == '-') && !(tabstr[i][j
					+ 1] >= '0' && tabstr[i][j + 1] <= '9'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// check_nb = check overflow and check duplicate nb

int	check_nb(char **tabstr)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	while (tabstr[i])
	{
		tmp = ft_atol(tabstr[i]);
		if (!(tmp >= -2147483648 && tmp <= 2147483647))
			return (1);
		j = i + 1;
		while (tabstr[j])
		{
			if (tmp == ft_atol(tabstr[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// call all mi function for parsing here

char	**parsing_base(int argc, char **argv)
{
	char	**tabstr;

	if (check_null_empty(argc, argv))
	{
		write(2, "Error\n", 6);
		return (NULL);
	}
	tabstr = split_arg(argc, argv);
	if (!tabstr || parser(tabstr) == 1 || check_nb(tabstr) == 1)
	{
		if (tabstr)
			ft_free_tabstr(tabstr);
		write(2, "Error\n", 6);
		return (NULL);
	}
	return (tabstr);
}
