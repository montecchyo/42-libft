/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:32:35 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/02 16:42:43 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s2[i])
		i++;
	if (i == 0)
		return ((char *)s1);
	while (s1[j] != '\0' && (j + i - 1) < n)
	{
		while (s2[k] == s1[k + j])
		{
			if (k + 1 == i)
				return ((char *)s1 + j);
			k++;
		}
		k = 0;
		j++;
	}
	return (0);
}
