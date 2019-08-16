# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    where_am_i.sh                                      :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/16 05:59:31 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/16 06:07:17 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

var=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z "$var"
then
	echo "I am lost!"
else
	echo $var | tr ' ' '\n'
fi