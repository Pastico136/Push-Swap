/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:54:55 by parenvoi          #+#    #+#             */
/*   Updated: 2025/11/20 10:55:02 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_gnl(char *line, char c)
{
	int	i;

	if (!line)
		return (NULL);
	i = 0;
	while (line[i])
	{
		if (line[i] == c)
			return (&line[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen_gnl(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strcat_gnl(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*dest;
	size_t	i;

	if (!s1)
	{
		dest = ft_strndup_gnl(s2, ft_strlen_gnl(s2));
		return (dest);
	}
	if (!s2)
		return (NULL);
	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	dest = ft_strcat_gnl(dest, s2);
	return (dest);
}

char	*ft_strndup_gnl(char *s, size_t n)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen_gnl(s);
	if (!len)
		return (NULL);
	if (len < n)
		str = malloc(sizeof(char) * len + 1);
	else
		str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
