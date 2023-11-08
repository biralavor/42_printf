/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:03:14 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/08 17:47:20 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

# define DECIMAL "0123456789"
# define HEXALOWER "0123456789abcdef"
# define HEXAUPPER "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_placeholder(char format, va_list ptr);
int	ft_putnbrbase(long long n, char *base);
int	ft_putptr(long long n, char *base);

#endif