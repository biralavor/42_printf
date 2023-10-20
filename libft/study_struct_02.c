/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_struct_02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:49:57 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/06 17:33:30 by umeneses         ###   ########.fr       */
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
	struct s_node	*current;

	head = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	head -> data = 45;
	head -> link = NULL;
	printf("\033[0;033m");
	printf("head    = %d\n", head -> data);
	free (head);
	current = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	current -> data = 98;
	current -> link = NULL;
	printf("\033[0;033m");
	printf("current = %d\n", current -> data);
	free (current);
	return (0);
}
