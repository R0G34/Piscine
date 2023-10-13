/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decroito <decroito@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:16:27 by decroito          #+#    #+#             */
/*   Updated: 2023/07/26 10:26:38 by abausa-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*res;

	i = 0;
	while (src [i])
		i++;
	res = (char *)malloc(sizeof(*res) * i + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main(void)
{

	printf("%s", ft_strdup("Hola mundo"));
	return (0);
}
*/
