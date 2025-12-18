/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:34:11 by parenvoi          #+#    #+#             */
/*   Updated: 2025/11/01 11:45:01 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*sub_s;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
	{
		sub_s = ft_calloc(1, 1);
		return (sub_s);
	}
	size -= start;
	if (len < size)
		size = len;
	sub_s = malloc(sizeof(char) * (size + 1));
	if (!sub_s)
		return (NULL);
	sub_s = ft_memcpy(sub_s, s + start, size);
	sub_s[size] = '\0';
	return (sub_s);
}
