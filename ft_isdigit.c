/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:47:26 by acastril          #+#    #+#             */
/*   Updated: 2021/08/04 13:20:50 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int	n)
{
	if ((n >= '0' && n <= '9'))
		return (1);
	else
		return (0);
}
