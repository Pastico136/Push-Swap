/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:02:22 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/01 14:33:02 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_len(unsigned int nbr, char *base)
{
	int	len;

	len = 0;
	if (nbr >= 16)
		len += ft_puthex_len(nbr / 16, base);
	len += write(1, &base[nbr % 16], 1);
	return (len);
}
