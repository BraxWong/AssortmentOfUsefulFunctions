cmake_minimum_required(VERSION 3.13.4)
project(AssortmentOfUsefulFunctions VERSION 1.0)
add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
add_subdirectory(File)
add_subdirectory(Date)
add_subdirectory(String)
target_include_directories(${PROJECT_NAME}
  PUBLIC File
  PUBLIC Date
  PUBLIC String
)
target_link_directories(${PROJECT_NAME}
  PUBLIC File
  PUBLIC Date
  PUBLIC String
)
target_link_libraries(${PROJECT_NAME} File Date String)

