/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:04:10 by parenvoi          #+#    #+#             */
/*   Updated: 2025/10/29 12:27:22 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	safe_malloc(char ***tabstr, size_t size)
{
	*tabstr = malloc(size);
	if ((*tabstr) == NULL)
		return (1);
	return (0);
}

static void	free_in_tabstr(char **tab_str, int error_index)
{
	if (error_index == 0)
		return ;
	while (--error_index >= 0)
		free(tab_str[error_index]);
}

static int	tab_count(char const *str, char sep)
{
	int	count;
	int	i;

	if (sep == '\0')
		return (1);
	count = 0;
	i = -1;
	while (str[++i])
		if (str[i] != sep && str[i + 1] == sep)
			count++;
	if (i > 0 && str[i - 1] != sep)
		count++;
	return (count);
}

static void	create_tab(char **tab, char const *str, char sep, int i)
{
	int	start_index;

	start_index = i;
	while (str[i] && str[i] != sep)
		i++;
	*tab = ft_substr(str, start_index, i - start_index);
}

char	**ft_split(char const *s, char c)
{
	int		tabstr_index;
	int		s_index;
	char	**tabstr;

	if (!s || safe_malloc(&tabstr, sizeof(char *) * (tab_count(s, c) + 1)))
		return (NULL);
	tabstr_index = -1;
	s_index = -1;
	if (s[0] != c && s[0])
		create_tab(&tabstr[++tabstr_index], s, c, ++s_index);
	while (s[++s_index])
	{
		if (s[s_index] == c && s[s_index + 1] != c && s[s_index + 1])
			create_tab(&tabstr[++tabstr_index], s, c, ++s_index);
		if (tabstr_index != -1 && tabstr[tabstr_index] == NULL)
		{
			free_in_tabstr(tabstr, tabstr_index);
			free(tabstr);
			return (NULL);
		}
	}
	tabstr[tabstr_index + 1] = NULL;
	return (tabstr);
}
