/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:28:38 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/05 20:26:35 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_putnbr_fd(long long int n, int fd)
{
	long long int	len;

	len = 0;
	if (n < 0 && n >= -9)
	{
		n *= -1;
		len += ft_putchar_fd('-', fd);
	}
	else if (n <= -10)
	{
		n *= -1;
		len += ft_putchar_fd('-', fd);
		len += ft_putnbr_fd((n / 10), fd);
	}
	else if (n > 9)
		len += ft_putnbr_fd((n / 10), fd);
	len += ft_putchar_fd(((n % 10) + '0'), fd);
	return (len);
}
