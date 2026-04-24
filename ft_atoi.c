/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:54:55 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/24 14:55:01 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == ' '))
		return (1);
	return (0);
}

static int	ft_negative(char c)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
		{
			return (-1);
		}
		return (1);
	}
	return (0);
}

static int	ft_convertnum(const char *str)
{
	int	n;

	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

int	ft_atoi(const char *str)
{
	int	sym;
	int	n;

	sym = 1;
	n = 0;
	while (ft_isspace(*str) == 1)
		str++;
	if (ft_negative(*str) != 0)
	{
		if (ft_negative(*str) == -1)
		{
			sym = -1;
		}
		str++;
	}
	n = ft_convertnum(str);
	return (n * sym);
}
