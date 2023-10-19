/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_study_02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:43:15 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/17 19:02:53 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

// variadic function to find the largest number
int	largest_nbr(int n, ...)
{
	//declaring pointer to the argument list
	va_list	ptr;
	// initializing argument to the list pointer
	va_start(ptr, n);

	int max = va_arg(ptr, int);
	int i = 0;
	while (i < n - 1)
	{
		// accessing current vaiable
		// and pointing to the next
		int temp = va_arg(ptr, int);
		// max = temp > max ? temp : max;
		if (temp > max)
			max = temp;
		i++;
	}
	// end of argument list traversal
	va_end(ptr);
	return(max);
}

int main(void)
{
	printf("\033[0;33m");
	printf("\nVariadic functions:\n");
	printf("\033[0;34m");
	//variable number of arguments
	printf("largest number (1,2) = %d\n", largest_nbr(2, 1, 2));
	printf("largest number (3,4,5) = %d\n", largest_nbr(3, 3, 4, 5));
	printf("largest number (6,7,8,9) = %d\n", largest_nbr(4, 6, 7, 8, 9));
	return(0);
}
