FROM busybox:latest

EXPOSE 80

COPY http-date.sh /app.sh

CMD while true; do nc -l -p 80 -e /app.sh; done
