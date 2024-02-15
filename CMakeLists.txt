cmake_minimum_required(VERSION 3.5)

project(conversion_from_decimal_to_binary LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(conversion_from_decimal_to_binary main.cpp)

include(GNUInstallDirs)
install(TARGETS conversion_from_decimal_to_binary
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
