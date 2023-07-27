/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitovsk <stitovsk@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:08:48 by stitovsk          #+#    #+#             */
/*   Updated: 2023/07/18 16:08:13 by stitovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (size > 0)
	{
		while ((i < size - 1) && (src[i]))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}
