/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romlambe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:09:58 by romlambe          #+#    #+#             */
/*   Updated: 2023/10/18 09:10:23 by romlambe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdigit(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_itoa2(int n, char *res, size_t len)
{
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		len--;
		res[len] = n % 10 + 48;
		n = n / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	len = ft_countdigit(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	if (n == 0)
	{
		free(res);
		return (ft_strdup("0"));
	}
	if (n == -2147483648)
	{
		free(res);
		return (ft_strdup("-2147483648"));
	}
	return (ft_itoa2(n, res, len));
}

/*#include <stdio.h>
int main()
{
	printf("%s\n" ,ft_itoa(2147483647));
	return (0);
}*/
