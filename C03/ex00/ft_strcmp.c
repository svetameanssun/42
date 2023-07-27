/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:28:08 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/23 20:30:42 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char*s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}