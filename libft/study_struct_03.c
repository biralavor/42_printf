/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   study_struct_03.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:49:57 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/07 17:12:32 by umeneses         ###   ########.fr       */
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

void	*ft_add_at_end(struct s_node *head, int data)
{
	struct s_node	*temp;
	struct s_node	*ptr;

	ptr = head;
	temp = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	if (!temp)
		return (NULL);
	temp->data = data;
	temp->next = NULL;
	while (ptr->next != NULL)
		ptr = ptr->next;
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
	ptr = (struct s_node *)ft_calloc(1, sizeof(struct s_node));
	if (!ptr)
		return (0);
	ptr = ft_add_at_end(head, 98);
	ptr = ft_add_at_end(head, 3);
	ptr = ft_add_at_end(head, 67);
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
