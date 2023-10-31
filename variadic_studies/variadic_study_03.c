/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_study_03.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:10:43 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/31 13:22:34 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	variadic_add(int count, ...)
{
	va_list	args;
	int		i;
	int		sum;

	/* save arguments in list */
	va_start(args, count);
	sum = 0;
	i = 0;
	while (i < count)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}

int	main(void)
{
	printf("\033[0;33m");
	printf("Variadic functions\n");
	printf("\033[0;34m");
	/* call 1 : 4 arguments */
	printf("sum call 1 = %d\n", variadic_add(3, 10, 20, 30));
	printf("sum call 2 = %d\n", variadic_add(5, 10, 20, 30, 40, 50));
	return (0);
}
