/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:59:16 by parenvoi          #+#    #+#             */
/*   Updated: 2025/10/23 19:01:32 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*str;

	size = ft_len(n);
	str = ft_calloc(size + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		str[i] = '-';
	if (n == 0)
		str[i] = '0';
	else
	{
		while (n != 0)
		{
			if (n < 0)
				str[size - i++ - 1] = (n % 10 * -1) + '0';
			else
				str[size - i++ - 1] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}
