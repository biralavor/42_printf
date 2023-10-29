/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bira <bira@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/26 17:37:37 by bira             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (index < argc)
	{
		printf("\033[0;34m");
		printf("original printf sending 'string'= %s\n", argv[index]);
		printf("\033[0;33m");
		printf("\n");
		ft_printf("my printf = %d %c\n", 42, 'd');
		index++;
	}
	return (0);
}
