/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:03:14 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/30 11:41:15 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

typedef	struct s_lst_1
{
	int					i;
	int					c;
	char				*s;
	int					d;
	unsigned int		u;
	struct	s_lst_1		*next;
}						t_lst_1;

typedef	struct s_lst_2
{
	void				*p;
	char				*s;
	int					hex_low;
	int					hex_upp;
	struct	s_lst_2		*next;
}						t_lst_2;

int	ft_printf(const char *format, ...);

#endif