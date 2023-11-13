#Dockerfile
FROM ubuntu:22.04

RUN apt-get update && apt-get install -y --no-install-recommends
    wget git cmake nano libeigen3-dev libgtk-3-dev qt5-default freeglut3-dev libvtk6-qt-dev libtbb-dev
RUN apt install -y tzdata
ENV TZ=Asia/Tokyo

RUN apt install -y wget 
  g++
  cmake
  git
  clang-format
