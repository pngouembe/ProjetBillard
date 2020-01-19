cmake_minimum_required(VERSION 2.6)

project(bi_bi_bi_billard)

add_executable(bi_bi_bi_billard source/main.cpp source/lib.cpp source/displayLib.cpp)

find_package(OpenGL REQUIRED)

# GLM
#find_package(GLM REQUIRED)
#message(STATUS "GLM included at ${GLM_INCLUDE_DIR}")

# GLFW
#find_package(GLFW3 REQUIRED)
#message(STATUS "Found GLFW3 in ${GLFW3_INCLUDE_DIR}")

# ASSIMP
#find_package(ASSIMP REQUIRED)
#message(STATUS "Found ASSIMP in ${ASSIMP_INCLUDE_DIR}")

# Put all libraries into a variable
set(LIBS glut GL GLEW GLU)

# Define the link libraries
target_link_libraries(bi_bi_bi_billard ${LIBS})