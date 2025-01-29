/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:52:03 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/13 22:14:36 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "examtest.h"

void	ft_putstr(char *str)
{
    int i = 0;
    
    while(str[i])
        write(1, &str[i++], 1);
}
int main(void)
{
    ft_putstr("coucou");
}