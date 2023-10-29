/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:49 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/26 17:40:05 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		c;
	int		i;

	va_start(ptr, format);
	i = va_arg(ptr, int);
	c = va_arg(ptr, int);
	// if (*format == %)
	// {	
	// }
	// fd = 1;
	// ft_putchar_fd(c, fd);
	// va_end(ptr);
	int index;

	index = 3;
	while (index--)
	{
		printf("%c char\n", *format++);
	}
	printf("\n%i int\n", i);
	printf("\n%c char\n", c);
	va_end(ptr);
	return (0);
}
