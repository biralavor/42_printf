/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:49 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/03 13:53:17 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ptr;
	long int	len;

	len = 0;
	va_start(ptr, format);
	while (*format != '\0')
	{
		if ('%' == *format)
		{
			format++;
			if ('c' == *format)
				len += ft_putchar_fd(va_arg(ptr, int), 1);
			else if ('s' == *format)
				len += ft_putstr_fd(va_arg(ptr, char *), 1);
			else if (('i' == *format) || ('d' == *format))
				ft_putnbr_fd(va_arg(ptr, int), 1);
			else if ('u' == *format)
				ft_putnbr_fd(va_arg(ptr, unsigned int), 1);
			else if (37 == *format)
				len += ft_putchar_fd(37, 1);
			format++;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			format++;
			len++;
		}
	}
	va_end(ptr);
	return (len);
}
				// else if (('x' == *format))
				// 	ft_hexalower(ptr, *format);
				// else if ('l' == *format)
				// {
				// 	format++;
				// 	if (('i' == *format) || ('d' == *format))
				// 		ft_putnbr_fd(va_arg(ptr, long int), 1);
				// }
// int	ft_hexalower(va_list ptr, *format)
// {
// 	while (ft_strlen(*format) > 1)
// 	{
// 		ft_lstlast(ptr);
// 		if (check_nbr())
// 			ft_putnbr_fd(va_arg(ptr, int), 1);
// 		if (check_char())
// 		{
// 			if ('a' == *format)
// 				ft_putchar_fd();
// 		}
// 	}
// }
