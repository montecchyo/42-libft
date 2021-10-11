/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:49:08 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/02 18:31:00 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*temp;

	temp = (char *)malloc(n * sizeof(char));
	if (temp == NULL)
	{
		return (NULL);
	}
	ft_memcpy(temp, s2, n);
	ft_memcpy(s1, temp, n);
	free(temp);
	return (s1);
}
