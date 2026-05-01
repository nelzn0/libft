/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:01:09 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/21 18:41:42 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_forward_copy(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	while (len > 0)
	{
		*temp_dst = *temp_src;
		len--;
		temp_src++;
		temp_dst++;
	}
}

static void	ft_backward_copy(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	int				i;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	i = (int)len - 1;
	while (i >= 0)
	{
		temp_dst[i] = temp_src[i];
		i--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src == NULL && dst == NULL)
		return (NULL);
	if (src > dst)
		ft_forward_copy(dst, src, len);
	else
		ft_backward_copy(dst, src, len);
	return (dst);
}
