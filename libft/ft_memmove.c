/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:57:27 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/11 16:32:43 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	tmp_dst = (char *)dest;
	tmp_src = (char *)src;
	if (tmp_dst > tmp_src)
	{
		while (n - 1 > 0)
		{
			tmp_dst[n] = tmp_src[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}

/* int	main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	size_t len = 2;

	printf("str1(original): %s\n", str1);
	printf("str2(original): %s\n", str2);

	ft_memmove(str1, str2, len);
	printf("ft_memmove_str1: %s\n", str1);
	ft_memmove(str2, str1, len);
	printf("ft_memmove_str2: %s\n", str2);
} */