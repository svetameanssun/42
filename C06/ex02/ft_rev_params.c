/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:35:34 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/26 22:36:35 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	while (i > 1)
	{
		j = 0;
		while (argv[i - 1][j])
		{
			write (1, &argv[i - 1][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i--;
	}
}
