/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evella <evella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 23:42:57 by evella            #+#    #+#             */
/*   Updated: 2023/10/01 23:43:10 by evella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, void *src, int c, int len)
{
	char	*tempd;
	char	*temps;

	tempd = dest;
	temps = src;
	while (len-- > 0)
	{
		*tempd = *temps;
		if (*tempd == c)
			return (tempd + 1);
		tempd++;
		temps++;
	}
	return (0);
}
