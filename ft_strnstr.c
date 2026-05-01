/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 19:24:38 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/22 15:28:58 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while ((haystack[i] != '\0') && (len > 0))
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (haystack[i + j] != '\0')
			&& (i + j < len))
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *) &haystack[i]);
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return ((char *) NULL);
}
