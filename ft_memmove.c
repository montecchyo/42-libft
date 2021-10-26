/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:49:08 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/22 20:50:12 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*cdest;
	const unsigned char	*csrc;
	size_t				i;

	cdest = (unsigned char *) s1;
	csrc = (unsigned char *) s2;
	i = 0;
	if (!cdest && !csrc)
		return (NULL);
	if (cdest > csrc)
		while (n-- > 0)
			cdest[n] = csrc[n];
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
		}
	}
	return (dest);
}
