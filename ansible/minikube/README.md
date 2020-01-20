phil@laptop:~/ansible/minikube$ sudo docker build github.com/clipedge/ansible.git#:minikube -t clipedge/hello:0.0
Sending build context to Docker daemon  6.656kB
Step 1/4 : FROM node:6.14.2
 ---> 00165cd5d0c0
Step 2/4 : EXPOSE 8080
 ---> Using cache
 ---> 5dfc63bd0759
Step 3/4 : COPY server.js .
 ---> Using cache
 ---> 1b23e2eda433
Step 4/4 : CMD node server.js
 ---> Using cache
 ---> cd9b87e2318f
Successfully built cd9b87e2318f
Successfully tagged clipedge/hello:0.0
phil@laptop:~/ansible/minikube$ sudo docker images
REPOSITORY          TAG                 IMAGE ID            CREATED             SIZE
clipedge/hello      0.0                 cd9b87e2318f        12 minutes ago      660MB
node                6.14.2              00165cd5d0c0        17 months ago       660MB

