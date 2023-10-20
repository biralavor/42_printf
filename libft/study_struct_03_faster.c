/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_struct_03_faster.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:49:57 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/07 17:12:15 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

void	*ft_add_at_end(struct s_node *ptr, int data)
{
	struct s_node	*temp;

	temp = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	if (!temp)
		return (NULL);
	temp->data = data;
	temp->next = NULL;
	ptr->next = temp;
	return (temp);
}

int	main(void)
{
	struct s_node	*head;
	struct s_node	*ptr;

	head = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	if (!head)
		return (0);
	head->data = 45;
	head->next = NULL;
	ptr = head;
	ptr = ft_add_at_end(ptr, 98);
	ptr = ft_add_at_end(ptr, 3);
	ptr = ft_add_at_end(ptr, 67);
	ptr = head;
	printf("\033[0;033m");
	printf("head data = %d\n", head->data);
	while (ptr != NULL)
	{
		printf("ptr data  = %d\n", ptr->data);
		ptr = ptr->next;
	}
	free (head);
	free (ptr);
	return (0);
}
