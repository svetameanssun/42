/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:28:23 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/26 15:35:04 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		aux = nb - 1;
		while (aux != 0)
		{
			nb = nb * aux;
			aux--;
		}
	}
	return (nb);
}
/*
 
#include <stdio.h>
 int main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
