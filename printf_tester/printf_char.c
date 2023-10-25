/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/25 14:42:37 by umeneses         ###   ########.fr       */
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
		printf("\033[0;37m");
		printf("original printf sending 'string'= %s\n", argv[index]);
		printf("\033[0;34m");
		printf("\n");
		index++;
	}
	return (0);
}
