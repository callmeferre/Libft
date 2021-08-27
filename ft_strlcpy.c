/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:53:51 by acastril          #+#    #+#             */
/*   Updated: 2021/08/06 10:31:13 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	char	*c;
	size_t	r;

	c = (char *)src;
	r = dstsize;
	if (!src)
		return (0);
	if (dstsize != 0)
	{
		while (--r != 0)
		{
			*dest = *src;
			if (*dest == '\0')
				break ;
			dest++;
			src++;
		}
	}
	if (dstsize != 0)
		*dest = '\0';
	while (*src != 0)
		src++;
	return (src - c);
}
