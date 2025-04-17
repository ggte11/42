/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:12 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 17:19:47 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	i = 0;
	srclen = 0;
	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (size <= dest[destlen])
		return (srclen + size);
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[destlen + 1] = src[i];
		i++;
	}
	dest[destlen + i] = src[i];
	return (destlen + srclen);
}

/* int	main()
{
	char dest[30] = "Hello Worlds!";
	char src[] = "Im home";
	size_t size = 30;
	
	size_t result = ft_strlcat(dest, src, size);
	printf("%s\n %s\n", src, dest);
	printf("Return value: %zu\n", result);
} */