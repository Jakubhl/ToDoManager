cmake_minimum_required(VERSION 3.16)
project(ToDoManager VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/src/ui)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
# Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Sources
file(GLOB_RECURSE SRC_FILES
    src/*.cpp
    src/ui/*.ui
    include/*.h
)

add_executable(ToDoManager ${SRC_FILES})

target_include_directories(ToDoManager PRIVATE include)

target_link_libraries(ToDoManager Qt6::Widgets)

# Windows: GUI app (bez konzole)
if (WIN32)
    set_target_properties(ToDoManager PROPERTIES WIN32_EXECUTABLE TRUE)
endif()