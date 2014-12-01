FROM debian:latest

RUN apt-get update \
    && apt-get install -y --no-install-recommends nginx \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/

COPY hi.html /usr/share/nginx/www/index.html

EXPOSE 80

CMD exec nginx -g 'daemon off;'
