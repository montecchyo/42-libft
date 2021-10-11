/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kborges- <kborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:27:13 by kborges-          #+#    #+#             */
/*   Updated: 2021/10/08 23:57:52 by kborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	get_nbr_str(char *str, int n, size_t size);

char	*ft_itoa(int n)
{
	char	*str;
	int		temp;
	int		size;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	temp = n / 10;
	while (temp)
	{
		temp = temp / 10;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	get_nbr_str(str, n, size);
	return (str);
}

static void	get_nbr_str(char *str, int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
	{
		while (size--)
		{
			str[size] = (n % 10) + '0';
			n = n / 10;
		}
	}
	else
	{
		while (--size)
		{
			str[size] = (n % 10) * -1 + '0';
			n = n / 10;
		}
		str[size] = '-';
	}
}
