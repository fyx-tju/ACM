cmake_minimum_required(VERSION 2.6)
project(acm)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(acm_SRCS acm.cpp main.cpp)

qt4_automoc(${acm_SRCS})
add_executable(acm ${acm_SRCS})
target_link_libraries(acm ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})

install(TARGETS acm RUNTIME DESTINATION bin)
