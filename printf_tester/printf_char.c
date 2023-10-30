/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/30 17:14:47 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\033[0;34m");
	printf("original printf checker:\n \
			char = %c\n \
			str  = %s\n \
			integ= %i\n", 'd', "hello", 9);
	printf("\033[0;33m");
	printf("\n");
	ft_printf("my printf :)\n \
				char = %c\n \
				str  = %s\n \
				integ= %i\n", 'd', "hello", 9);
	return (0);
}
