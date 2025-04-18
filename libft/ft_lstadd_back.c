/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:48:31 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/17 18:20:17 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}

/* int	main()
{
	t_list *list = NULL;

	t_list *node1 = ft_lstnew("World");
	t_list *node2 = ft_lstnew("Hello");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);

	printf("%s\n", (char *)list->content);
	list = list->next;
	return (0);
} */