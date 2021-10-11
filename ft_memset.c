/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:26:28 by kborges-          #+#    #+#             */
/*   Updated: 2021/09/13 20:13:21 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*aux;
	size_t	counter;

	aux = (char *)s;
	counter = 0;
	while (counter < n)
	{
		aux[counter] = c;
		counter++;
	}
	return (s);
}
