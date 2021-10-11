/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 02:48:28 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/03 16:55:08 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	total_len;
	char	*sub_s;

	if (!s)
		return (NULL);
	total_len = ft_strlen(s);
	if (total_len < start)
		return (ft_strdup(""));
	total_len = ft_strlen(s + start);
	if (total_len < len)
		len = total_len;
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_s)
		return (NULL);
	ft_strlcpy(sub_s, s + start, len + 1);
	return (sub_s);
}
