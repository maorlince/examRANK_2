/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:41:57 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/16 18:05:29 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"examtest.h"

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
int main(void)
{
	int ft_strcmp(char *s1, char *s2);
	printf("%d", ft_strcmp("abc", "abc"));
}