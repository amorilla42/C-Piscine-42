# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 18:07:18 by amorilla          #+#    #+#              #
#    Updated: 2022/02/24 18:07:54 by amorilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR>1' | awk 'NR%2' | cut -d ":" -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | awk '{if (NR > 1) printf", %s",$0; else printf "%s",$0}END{printf"."}'
