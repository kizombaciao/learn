FROM ubuntu
MAINTAINER James C (email@domain.com)
RUN apt-get update
RUN apt-get install -y nginx
WORKDIR /var/www/html
#WORKDIR /usr/share/nginx/html
COPY index.html .
ENTRYPOINT ["/usr/sbin/nginx", "-g", "daemon off;""]
EXPOSE 80


