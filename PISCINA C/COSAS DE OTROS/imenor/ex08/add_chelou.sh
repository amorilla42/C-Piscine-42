# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    add_chelou.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 18:08:10 by amorilla          #+#    #+#              #
#    Updated: 2022/02/24 18:08:18 by amorilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | tr "'"'\\\"\?\!' 01234 | tr 'mrdoc' 01234 | sed 's/^/obase=13; ibase=5;/' | bc | tr 0123456789ABC 'gtaio luSnemf'
