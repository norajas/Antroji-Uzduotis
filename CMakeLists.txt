cmake_minimum_required(VERSION 3.23)
project(Pirmoji_Uzduotis_V1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INSTALL_PREFIX "C:/Pirmoji_Uzduotis")
set(SOURCE_FILES main.cpp funkcijos.cpp mano_lib.hpp funkcijos.hpp)

add_executable(Pirmoji_Uzduotis_V1.0 ${SOURCE_FILES})

install(TARGETS Pirmoji_Uzduotis_V1.0 DESTINATION deb CONFIGURATIONS Debug)
install(TARGETS Pirmoji_Uzduotis_V1.0 DESTINATION rel CONFIGURATIONS Release)
