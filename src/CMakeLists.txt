add_subdirectory(lib)

add_executable(calculator main.c)
target_link_libraries(calculator lib)

# headers dans ../include
target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_include_directories(lib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)

# pour que les tests "src/calculator ..." marchent
set_target_properties(calculator PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/src)
