/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:56:25 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/26 17:16:22 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power != 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_iterative_power(0,0));
	printf("%d", ft_iterative_power(2,-2));
	printf("%d", ft_iterative_power(-2,2));
	printf("%d", ft_iterative_power(3,0));
}*/
