/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ptr_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:02:22 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/02 18:19:40 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	make_ptr(void *ptr, char *base)
{
	int					len;
	unsigned long long	nbr;

	nbr = (unsigned long long)ptr;
	len = 0;
	if (nbr >= 16)
		len += make_ptr((void *)(nbr / 16), base);
	len += write(1, &base[nbr % 16], 1);
	return (len);
}

int	ft_puthex_ptr_len(void *ptr, char *base)
{
	int	len;

	if (!ptr)
		return (ft_putstr_len("(nil)"));
	len = write(1, "0x", 2);
	len += make_ptr(ptr, base);
	return (len);
}
