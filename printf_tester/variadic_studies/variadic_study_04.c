/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_study_04.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:44:27 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/31 13:22:03 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

double	avarage(int count, ...)
{
	va_list	ap;
	int		j;
	double	sum;

	sum = 0;
	j = 0;
	va_start (ap, count);
	while (j < count)
	{
		sum = sum + va_arg(ap, int);
		j++;
	}
	va_end(ap);
	return (sum / count);
}

int	main(int argc, const char **argv)
{
	int	index;

	index = 0;
	printf("You have entered %d itens: \n", (argc - 1));
	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	printf("\navarage = %f\n", avarage((argc - 1), argv[index]));
	return (0);
}
