/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:23 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/09 20:25:07 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == '\0')
		return ((char *)src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (find[j] && src[i + j] == find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&src[i]);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	char *c = "Hello Worlds!";
	char *find = "Worlds";
	char *res = ft_strnstr(c, find, 15);
	printf("%s\n", res);
	return (0);
} */