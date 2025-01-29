/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:39:36 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/13 19:51:30 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "examtest.h"

int	ft_strlen(char *str)
{
    int i = 0;
    
    while(str[i])
        i++;
    return (i);
}
int main(void)
{
    char *str = "coucou";
    printf ("%d",ft_strlen(str));
}