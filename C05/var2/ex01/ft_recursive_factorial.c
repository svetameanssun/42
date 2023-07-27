/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:47:28 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/26 17:50:14 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		res = nb * ft_recursive_factorial(nb - 1);
		return (res);
	}
}
/*#include <stdio.h>

int main(void)
{ 
	printf("%d", ft_iterative_factorial(5));
}*/
