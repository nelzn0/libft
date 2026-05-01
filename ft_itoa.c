/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:22:33 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/27 12:54:59 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numlen(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

static int	ft_negative(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
		return (1);
	return (0);
}

static char	*ft_convertstr(char *result, int n, int size)
{
	long	nb;

	nb = n;
	if (ft_negative(nb) == 1)
	{
		result[0] = '-';
		nb = -nb;
		while (size > 1)
		{
			result[size - 1] = nb % 10 + '0';
			nb = nb / 10;
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			result[size - 1] = nb % 10 + '0';
			nb = nb / 10;
			size--;
		}
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*result;

	if (ft_negative(n) == 1)
		size = ft_numlen(n) + 2;
	else
		size = ft_numlen(n) + 1;
	result = malloc(size * sizeof (char));
	if (result == NULL)
		return (NULL);
	result[size - 1] = '\0';
	size--;
	result = ft_convertstr(result, n, size);
	return (result);
}
