/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:56:37 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/26 18:05:06 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i != nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_is_prime(14));
	printf("%d", ft_is_prime(13));
	printf("%d", ft_is_prime(15));
	printf("%d", ft_is_prime(19));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(0));
}*/
