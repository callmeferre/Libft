/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 11:11:52 by acastril          #+#    #+#             */
/*   Updated: 2021/07/30 13:33:32 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;
	size_t			i;
	unsigned char	*temp;

	mem = malloc(size * count);
	if (!mem)
		return (0);
	temp = mem;
	i = 0;
	while (i++ < size * count)
		*temp++ = 0;
	return (mem);
}
