#
# Created by Zongchang_Liu on 2026/2/1 15:27.
# Email zongchang.smile@gmail.com
#

cmake_minimum_required(VERSION 3.25)

# set project name
set(PROJECT_NAME "hello-gstreamer")

# define the project
project(${PROJECT_NAME} LANGUAGES CXX)

# find PkgConfig package
find_package(PkgConfig REQUIRED)

# use PkgConfig to find GStreamer core libraries
pkg_check_modules(GSTREAMER REQUIRED IMPORTED_TARGET
        gstreamer-1.0
        gstreamer-video-1.0
        gstreamer-audio-1.0
        gstreamer-app-1.0
)

# use PkgConfig to find GStreamer plugins base libraries
pkg_check_modules(GSTREAMER_PLUGINS_BASE REQUIRED IMPORTED_TARGET
        gstreamer-plugins-base-1.0
)

# add the executable
add_executable(${PROJECT_NAME} main.cpp)

# link the GStreamer libraries to the executable
target_link_libraries(${PROJECT_NAME}
        PkgConfig::GSTREAMER
        PkgConfig::GSTREAMER_PLUGINS_BASE
)