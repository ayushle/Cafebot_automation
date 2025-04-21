cmake_minimum_required(VERSION 3.8)
project(cafe_bot)

# Standard options for warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(yaml-cpp REQUIRED)

# Declare the executable
add_executable(order src/order.cpp)
add_executable(task1 src/task1.cpp)
add_executable(task2 src/task2.cpp)
add_executable(task3 src/task3.cpp)
add_executable(task4 src/task4.cpp)
add_executable(task5 src/task5.cpp)
add_executable(task6 src/task6.cpp)
add_executable(task7 src/task7.cpp)






# Link against necessary libraries
ament_target_dependencies(order rclcpp std_msgs)
ament_target_dependencies(task1 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs) 
ament_target_dependencies(task2 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(task3 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(task4 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(task5 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(task6 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs)
ament_target_dependencies(task7 rclcpp std_msgs geometry_msgs ament_index_cpp nav2_msgs tf2 tf2_ros tf2_geometry_msgs)



target_link_libraries(task1 yaml-cpp)
target_link_libraries(task2 yaml-cpp)
target_link_libraries(task3 yaml-cpp)
target_link_libraries(task4 yaml-cpp)
target_link_libraries(task5 yaml-cpp)
target_link_libraries(task6 yaml-cpp)
target_link_libraries(task7 yaml-cpp)





# Install the executable
install(TARGETS order
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task1
  DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS
  task2
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task3
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task4
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task5
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task6
  DESTINATION lib/${PROJECT_NAME}
)
install(TARGETS
  task7
  DESTINATION lib/${PROJECT_NAME}
)

# Install resource files (including msgs, launch files, etc.)
install(
  DIRECTORY config description launch world 
  DESTINATION share/${PROJECT_NAME}
)
ament_package()
