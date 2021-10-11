/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:08:19 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/02 16:40:59 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t bsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < bsize)
		i++;
	while (src[j] && ((i + j + 1) < bsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != bsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
