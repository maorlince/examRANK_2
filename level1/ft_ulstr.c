/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:44:49 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/14 16:27:54 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "examtest.h"

void ft_ulstr(char *str)
{
    int i = 0;
    
    while(str[i])
    {
        if (str[i] <= 91 && str[i] >= 64)
        {
            str[i] += 32;
            write(1, &str[i], 1);
        }
        if (str[i] <= 123 && str[i] >= 96)
        {
           str[i] -= 32; 
            write(1, &str[i], 1);
        }
        i++;
    }
     write(1, "\n", 1);
}
int main(void)
{
    char *str = "COUcou CoMMent VAa";
    ft_ulstr(str);
}