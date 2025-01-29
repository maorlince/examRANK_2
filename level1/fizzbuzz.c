/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:49:36 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/15 20:15:13 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(void)
{
    int i = 1;
    char c = '1';
    
    while(i <= 100)
    {
        if(i % 15 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            if(i > 9)
            {
                c = i / 10 + 48;
                write(1, &c, 1);
            }
            c = i % 10 + 48;
            write(1, &c, 1);
        }
        write(1, "\n", 1);
        i++;
    }
        
}