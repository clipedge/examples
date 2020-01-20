```
# docker build --rm --tag clipedge/nginx:centos7 .
# docker run --name docker-nginx -p 80:80 -d -v /home/<username>/docker-nginx/sitename.org/html:/usr/share/nginx/html nginx
#
# CONTAINER  ID IMAGE  COMMAND                  CREATED         STATUS         PORTS                         NAMES
# f6b3a74ff1d8  nginx  "nginx -g 'daemon off"   2 minutes ago   Up 2 minutes   0.0.0.0:80->80/tcp, 443/tcp   docker-ngin

FROM centos:centos7
MAINTAINER Phil Leschina <phil@leschina.net>
 
RUN yum -y update; yum clean all
RUN yum -y install epel-release tar ; yum clean all
RUN yum -y install nginx ; yum clean all
```
