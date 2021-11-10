cmake_minimum_required(VERSION 3.16)
project(MyFDTD)

find_package(wxWidgets REQUIRED COMPONENTS net core base)

if(NOT ${wxWidgets_FOUND})
    message("package is not found : wxWidgets")
endif()

include(${wxWidgets_USE_FILE})

include_directories(
    ${wxWidgets_INCLUDE_DIRS}
)

add_executable(gui 
    GUI.cpp
    App.cpp
    Frame.cpp
)
target_link_libraries(gui ${wxWidgets_LIBRARIES})
set_target_properties(gui PROPERTIES COMPILE_FLAGS ${wxWidgets_CXX_FLAGS})
