/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:29:46 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/17 13:03:59 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

static int	count_digits(int num)
{
	int			len;
	long int	n;

	n = num;
	len = 0;
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*res;

	size = count_digits(n);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size--] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[size--] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}


/* int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char *str = ft_itoa(atoi(argv[1]));
	printf("str: %s\n", str);
	free(str);
	return (0);
} */