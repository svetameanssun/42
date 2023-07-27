/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:37:23 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/23 20:47:21 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '0')
	{
		i++;
	}
	while (str[j] != '\0' && j < len(str) - 1)
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	j++;
	return (j);
}
