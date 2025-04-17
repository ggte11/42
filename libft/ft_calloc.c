/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:34:14 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/17 16:12:58 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (nmemb && size > UINT_MAX / size)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, (nmemb * size));
	return (temp);
}

/* int	main(void)
{
	size_t	n = 5;
	size_t	size = sizeof(int);

	int	*mine = ft_calloc(n, size);
	int	*libc = calloc(n, size);

	if (!mine || !libc)
	{
		printf("Erro de alocação\n");
		free(mine);
		free(libc);
		return (1);
	}

	printf("Comparando valores zerados das alocações:\n");

	for (size_t i = 0; i < n; i++)
	{
		printf("mine[%zu] = %d | libc[%zu] = %d\n", i, mine[i], i, libc[i]);
	}

	free(mine);
	free(libc);

	return (0);
} */