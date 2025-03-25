ARG ROS_DISTRO=jazzy
FROM --platform=$BUILDPLATFORM ros:jazzy AS dev

SHELL ["/bin/bash", "-c"]

# RUN useradd --create-home --uid 100 --shell /bin/bash ros
# RUN echo ros ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/ros

RUN  apt-get update && apt-get install -y \
    ros-jazzy-demo-nodes-cpp \
    ros-jazzy-foxglove-bridge \
    ros-jazzy-tf2-ros \
    clang \
    clangd \
    colcon 


RUN mkdir -p /ros_ws
WORKDIR /ros_ws


COPY ./init.sh /
RUN chmod +x /init.sh

RUN echo "source /init.sh" >> /root/.bashrc



