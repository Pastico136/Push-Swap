/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:50:11 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/04 13:53:52 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_parser(char c, va_list *args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar_len(va_arg(*args, int));
	else if (c == 's')
		len += ft_putstr_len(va_arg(*args, char *));
	else if (c == 'p')
		len += ft_puthex_ptr_len(va_arg(*args, void *), "0123456789abcdef");
	else if (c == 'i' || c == 'd')
		len += ft_putnbr_len(va_arg(*args, int));
	else if (c == 'u')
		len += ft_unsigned_putnbr_len(va_arg(*args, unsigned int));
	else if (c == 'x')
		len += ft_puthex_len(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len += ft_puthex_len(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		len += write(1, &c, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int			i;
	int			len;
	va_list		args;

	va_start(args, format);
	i = 0;
	len = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_printf_parser(format[i], &args);
		}
		else
		{
			len += write(1, &format[i], 1);
		}
		i++;
	}
	return (len);
}
