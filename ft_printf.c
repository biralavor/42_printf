/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:49 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/08 17:48:11 by umeneses         ###   ########.fr       */
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
		len += ft_putnbrbase(va_arg(ptr, int), DECIMAL);
	else if ('u' == format)
		len += ft_putnbr_fd(va_arg(ptr, unsigned int), 1);
	else if ('%' == format)
		len += ft_putchar_fd(37, 1);
	else if ('x' == format)
		len += ft_putnbrbase((long long)va_arg(ptr, unsigned int), HEXALOWER);
	else if ('X' == format)
		len += ft_putnbrbase((long long)va_arg(ptr, unsigned int), HEXAUPPER);
	else if ('p' == format)
		len += ft_putptr((long long)va_arg(ptr, unsigned int), HEXALOWER);
	return (len);
}

int	ft_putnbrbase(long long n, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		len += ft_putchar_fd('-', 1);
		n = -n;
	}
	if (n >= base_len)
		len += ft_putnbrbase((n / base_len), base);
	len += ft_putchar_fd(base[n % base_len], 1);
	return (len);
}

int	ft_putptr(long long n, char *base)
{
	int	len;
	int	base_len;

	len = 0;
	base_len = ft_strlen(base);
	if (n == 0)
		len += ft_putstr_fd("(nil)", 1);
	else
	{
		len += ft_putstr_fd("0x", 1);
		len += ft_putnbrbase(n, base);
	}
	return (len);
}
