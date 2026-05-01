/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:45:01 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/27 18:48:32 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;

	if (count != 0 && (SIZE_MAX / count) < size)
		return (NULL);
	temp = malloc(count * size);
	if (temp == NULL)
		return (NULL);
	ft_bzero((void *) temp, count * size);
	return (temp);
}
