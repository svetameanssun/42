/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:08:22 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/26 17:54:46 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*#include <stdio.h>

int main(void)
{
	printf("%d", ft_recursive_power(2,5));
}*/
