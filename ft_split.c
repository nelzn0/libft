/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nda-roch <nda-roch@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:15:44 by nda-roch          #+#    #+#             */
/*   Updated: 2026/04/29 11:56:41 by nda-roch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_freeall(char **result, int j)
{
	while (j >= 0)
		free(result[j--]);
	free(result);
	return (NULL);
}

static char	**ft_wordfill(char **result, const char *s, char c)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			length = 0;
			while (s[i + length] && s[i + length] != c)
				length++;
			result[j] = ft_substr(s, i, length);
			if (result[j] == NULL)
				return (ft_freeall(result, j));
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		count;

	count = ft_wordcount(s, c);
	result = malloc(sizeof(char *) * (count + 1));
	if (result == NULL)
		return (NULL);
	result = ft_wordfill(result, s, c);
	return (result);
}
