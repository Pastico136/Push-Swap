/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenvoi <parenvoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:51:44 by parenvoi          #+#    #+#             */
/*   Updated: 2025/12/04 13:55:01 by parenvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_len(char c);
int	ft_puthex_len(unsigned int nbr, char *base);
int	ft_puthex_ptr_len(void *ptr, char *base);
int	ft_putnbr_len(int nbr);
int	ft_putstr_len(char *str);
int	ft_unsigned_putnbr_len(unsigned int nbr);

#endif
