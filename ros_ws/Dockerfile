ARG ROS_DISTRO=kilted
FROM --platform=$BUILDPLATFORM ros:kilted AS dev

SHELL ["/bin/bash", "-c"]


RUN  apt-get update && apt-get install -y \
  ros-kilted-demo-nodes-cpp \
  ros-kilted-foxglove-bridge \
  ros-kilted-tf2-ros \
  clang \
  clangd \
  colcon 


RUN mkdir -p /ros_ws
WORKDIR /ros_ws


COPY ./init.sh /
RUN chmod +x /init.sh

RUN echo "source /init.sh" >> /root/.bashrc



