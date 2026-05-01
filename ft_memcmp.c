/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:12:50 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/22 16:06:36 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;
	size_t			i;

	i = 0;
	temp_s1 = (unsigned char *) s1;
	temp_s2 = (unsigned char *) s2;
	while (i < n)
	{
		if (temp_s1[i] != temp_s2[i])
		{
			return (temp_s1[i] - temp_s2[i]);
		}
		i++;
	}
	return (0);
}
