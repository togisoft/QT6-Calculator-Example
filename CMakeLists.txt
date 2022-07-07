cmake_minimum_required(VERSION 3.23.2)


project(calculator VERSION 1.0)

if(UNIX)
  # Add file textension *.bin to all executables on Unix (Linux, OSX, BSD ...)
  set(CMAKE_EXECUTABLE_SUFFIX ".togi")
endif()

set(CMAKE_PREFIX_PATH "/opt/Qt/6.3.1/gcc_64/lib/cmake/")
set(PROJECT_DIR ${CMAKE_SOURCE_DIR})
set(PROJECT_MAIN_DIR ${PROJECT_DIR}/src)
set(PROJECT_SOURCE_DIR ${PROJECT_MAIN_DIR}/sources)
set(PROJECT_HEADER_DIR ${PROJECT_MAIN_DIR}/headers)

set (
  PROJECT_HEADER
  ${PROJECT_HEADER_DIR}/Calculator.hpp
  ${PROJECT_HEADER_DIR}/Button.hpp

)

set(
    PROJECT_SOURCE
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/Calculator.cpp
    ${PROJECT_SOURCE_DIR}/Button.cpp
)
find_package(Qt6Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


add_executable(${PROJECT_NAME} ${PROJECT_SOURCE} ${PROJECT_HEADER})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_HEADER_DIR})
target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
