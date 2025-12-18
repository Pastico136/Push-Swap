/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:55:13 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/04 13:37:46 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_of_number(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		len++;
	}
	len++;
	return (len);
}

int	ft_putnbr_len(int nbr)
{
	int	len;

	len = len_of_number(nbr);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	if (nbr >= 10)
		ft_putnbr_len(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
	return (len);
}
