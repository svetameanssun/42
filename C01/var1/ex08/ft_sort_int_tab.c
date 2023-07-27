/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:14:54 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/11 18:34:52 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	temp = 0;
	while (i < size)
	{	
		if (tab[i] < tab[i - 1])
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
			i = 0;
		}
		i++;
	}
}
