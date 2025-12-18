/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:34:43 by parenvoi          #+#    #+#             */
/*   Updated: 2025/10/19 01:43:51 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst == src || n == 0)
		return (dst);
	if (dst > src)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, n));
}
