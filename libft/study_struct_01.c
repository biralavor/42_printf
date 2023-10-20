/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_struct_01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:49:57 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/06 16:07:28 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

struct s_node
{
	int				data;
	struct s_node	*link;
}					t_node;

int	main(void)
{
	struct s_node	*head;

	head = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	head -> data = 45;
	head -> link = NULL;
	printf("\033[0;033m");
	printf("head = %d\n", head -> data);
	free (head);
	return (0);
}
