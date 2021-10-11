/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:23:17 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/03 11:09:26 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	int		i;
	int		j;
	char	*strj;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	strj = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!strj)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		strj[i] = s1[i];
		i++;
	}
	while (i < total_len)
	{
		strj[i] = s2[j];
		i++;
		j++;
	}
	strj[i] = '\0';
	return (strj);
}
