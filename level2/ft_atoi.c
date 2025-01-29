/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:08:40 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/16 17:31:25 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"examtest.h"

int     ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int symbol = 0;
    
    while(str[i])
    {
        if(str == "-")
            symbol = 45;
        res = str[i] - 48;
        i++; 
    }
    return(symbol, res);
}
int main(void)
{
    ft_atoi(const char *str);
    printf("%d", ft_atoi(456));
}
