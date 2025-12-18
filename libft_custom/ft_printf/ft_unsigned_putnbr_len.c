/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr_len.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:39:45 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/02 18:18:31 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_of_number(unsigned int nbr)
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

int	ft_unsigned_putnbr_len(unsigned int nbr)
{
	int	len;

	len = len_of_number(nbr);
	if (nbr < 0)
	{
		return (0);
	}
	if (nbr >= 10)
		ft_unsigned_putnbr_len(nbr / 10);
	nbr = nbr % 10 + '0';
	write(1, &nbr, 1);
	return (len);
}
