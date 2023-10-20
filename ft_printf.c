/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:49 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/19 18:17:21 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_printf(const char *, ...)
{
	
}



int main (int argc, char **argv)
{
	int index;

	index = 0;
	while (index < argc)
	{
		printf("\033[0;37m");
		printf("original printf 's'= %s\n", argv[index]);
		printf("\033[0;34m");
		printf("my printf = ");
		// ft_printf("%s", argv[index]);
		index++;
	}
	return(0);
}
