/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:49 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/05 20:23:42 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		len;
	int		index;

	if (!format)
		return (-1);
	len = 0;
	index = 0;
	va_start(ptr, format);
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1] != '\0')
			len += ft_placeholder(format[++index], ptr);
		else
			len += ft_putchar_fd(format[index], 1);
		index++;
	}
	va_end(ptr);
	return (len);
}

int	ft_placeholder(char format, va_list ptr)
{
	int	len;

	len = 0;
	if ('c' == format)
		len += ft_putchar_fd(va_arg(ptr, int), 1);
	else if ('s' == format)
		len += ft_putstr_fd(va_arg(ptr, char *), 1);
	else if ('l' == format)
	{
		format++;
		if (('l' == format) || ('i' == format) || ('d' == format))
			format++;
		len += ft_putnbr_fd(va_arg(ptr, long long int), 1);
	}
	else if (('i' == format) || ('d' == format))
		len += ft_putnbr_fd(va_arg(ptr, int), 1);
	else if ('u' == format)
		len += ft_putnbr_fd(va_arg(ptr, unsigned int), 1);
	else if ('%' == format)
		len += ft_putchar_fd(37, 1);
	else if ('x' == format)
	{
		if (9 <= format)
			len += ft_putnbr_fd(va_arg(ptr, unsigned int), 1);
		else
			len += ft_putchar_fd((va_arg((ptr), int) % 10) + 'a', 1);
	}
	return (len);
}
