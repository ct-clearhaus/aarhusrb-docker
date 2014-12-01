FROM busybox:latest

EXPOSE 80

COPY http-date.sh /app.sh

CMD nc -ll -p 80 -e /app.sh
