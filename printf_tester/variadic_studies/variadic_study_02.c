/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_study_02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:43:15 by umeneses          #+#    #+#             */
/*   Updated: 2023/11/03 14:20:47 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	largest_nbr(int n, ...)
{
	va_list	ptr;
	int		i;
	int		max;
	int		temp;

	va_start(ptr, n);
	max = va_arg(ptr, int);
	i = 0;
	while (i < n - 1)
	{
		temp = va_arg(ptr, int);
		if (temp > max)
			max = temp;
		i++;
	}
	va_end(ptr);
	return (max);
}
/*18 - declaring pointer to the argument list */
/*23 - initializing argument to the list pointer */
/*28 - accessing current vaiable and pointing to the next */
/*29 (other way) : max = temp > max ? temp : max; */

int	main(void)
{
	printf("\033[0;33m");
	printf("\nVariadic functions:\n");
	printf("\033[0;34m");
	printf("largest number (1,2) = %d\n", largest_nbr(2, 1, 2));
	printf("largest number (3,4,5) = %d\n", largest_nbr(3, 3, 4, 5));
	printf("largest number (6,7,8,9) = %d\n", largest_nbr(4, 6, 7, 8, 9));
	return (0);
}
