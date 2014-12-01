#!/bin/bash

DOCKER_HOST_IP=$(/sbin/ip route | awk '/default/ {print $3}')

[[ "$PORT" -eq "" ]] && echo 'Missing $PORT' && exit 1

echo "Updating nginx configuration with $DOCKER_HOST_IP:$PORT ..."
sed -i \
    -e "s/DOCKER_HOST_IP/$DOCKER_HOST_IP/" \
    -e "s/DOCKER_HOST_PORT/$PORT/" \
    /etc/nginx/sites-enabled/default

echo 'Starting nginx ...'
exec nginx -g 'daemon off;'
