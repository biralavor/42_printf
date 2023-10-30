/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:49 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/30 17:10:18 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;

	va_start(ptr, format);
	while (*format != '\0')
	{
		if('%' == *format)
		{
			format++;
			if('c' == *format)
				ft_putchar_fd(va_arg(ptr, int), 1);
			else if('s' == *format)
				ft_putstr_fd(va_arg(ptr, char *), 1);
			else if(ft_isdigit(*format))
				ft_putnbr_fd(va_arg(ptr, int), 1);
			format++;
		}
		else
		{	
			ft_putchar_fd(*format, 1);
			format++;
		}
	}
	va_end(ptr);
	return (0);
}
