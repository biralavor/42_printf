/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:01 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/31 15:04:19 by umeneses         ###   ########.fr       */
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
			integ= %li\n \
			decim= %d\n \
			unsig= %u\n", \
			'd', "string", -2147483648, __INT_MAX__, 65534);
	printf("\033[0;33m");
	ft_printf("my printf :)\n \
			char = %c\n \
			str  = %s\n \
			integ= %i\n \
			decim= %d\n \
			unsig= %u\n", \
			'd', "string", -2147483648, __INT_MAX__, 65534);
	return (0);
}
