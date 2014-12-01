FROM debian:latest

RUN apt-get update \
    && apt-get install -y --no-install-recommends nginx \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/

COPY default.conf /etc/nginx/sites-enabled/default
COPY start.sh /usr/local/bin/start

EXPOSE 80

CMD start
