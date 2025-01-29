/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 20:02:10 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/15 17:17:41 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    repeat_alpha(char *str)
{
        int i = 0;
        int j = 0;
        
        while(str[i])
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                j = 96;
                while(j < str[i])
                {
                    write(1, &str[i], 1);
                    j++;
                }
                
            }
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                j = 64;
                while(j < str[i])
                {
                    write(1, &str[i], 1);
                    j++;
                }
            }
            i++;
        }
        
}

int main(void)
{
    repeat_alpha("salut");
}

