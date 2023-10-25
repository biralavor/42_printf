/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_study_01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:33:39 by umeneses          #+#    #+#             */
/*   Updated: 2023/10/24 13:33:41 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

/* variadic function to add numbers */
int	ft_add_numbers(int n, ...)
{
	int	sum = 0;
	/* Declaring pointer to the argument list */
	va_list ptr;
	/* initializing argument to the list pointer */
	va_start(ptr, n);
	int i = 0;
	while (i < n)
	{
		/* accessing current variable and pointing */
		/* to the next one */
		sum += va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (sum);
}

int	main(void)
{
	printf("\033[0;34m");
	printf("\nVariadic functions:\n");
	printf("\033[0;37m");
	/* variable numbers of arguments */
	printf("1 + 2 = %d \n", ft_add_numbers(2, 1, 2));
	printf("3 + 4 + 5 = %d \n", ft_add_numbers(3, 3, 4, 5));
	printf("6 + 7 + 8 + 9 = %d \n", ft_add_numbers(4, 6, 7, 8, 9));
	return (0);
}

/*
The type va_list shall be defined for variables used
to traverse the list.

The va_start() macro is invoked to initialize ap to the beginning
of the list before any calls to va_arg().

The va_copy() macro initializes dest as a copy of src,
as if the va_start() macro had been applied to dest followed
by the same sequence of uses of the va_arg() macro as
had previously been used to reach the present state of src.
Neither the va_copy() nor va_start() macro shall be invoked
to reinitialize dest without an intervening invocation
of the va_end() macro for the same dest.

The object ap may be passed as an argument to another function;
if that function invokes the va_arg() macro with parameter ap,
the value of ap in the calling function is unspecified
and shall be passed to the va_end() macro prior to any further
reference to ap. The parameter argN is the identifier
of the rightmost parameter in the variable parameter
list in the function definition (the one just before the ...).
If the parameter argN is declared with the register storage class,
with a function type or array type, or with a type
that is not compatible with the type that results
after application of the default argument promotions,
the behavior is undefined.

The va_arg() macro shall return the next argument in the list
pointed to by ap. Each invocation of va_arg() modifies ap
so that the values of successive arguments are returned in turn.
The type parameter shall be a type name specified such
that the type of a pointer to an object that has the specified type
can be obtained simply by postfixing a '*' to type. If there is no
actual next argument, or if type is not compatible with the type
of the actual next argument (as promoted according to the default
argument promotions), the behavior is undefined, except for
the following cases:

    One type is a signed integer type, the other type is the
	corresponding unsigned integer type, and the value is
	representable in both types.

    One type is a pointer to void and the other is a pointer
	to a character type.

    [XSI] [Option Start] Both types are pointers. [Option End]

*/