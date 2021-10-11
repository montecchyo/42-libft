/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:58:40 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/02 19:11:20 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*copy_s;
	unsigned char	copy_c;

	copy_s = (unsigned char *)s;
	copy_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*copy_s == copy_c)
			return ((void *)copy_s);
		i++;
		copy_s++;
	}
	return (NULL);
}
