# Andrue Peters
# 10/4/2020
find_package(Qt6 COMPONENTS  Test REQUIRED)

add_executable(ClientTests src/client-tests.cpp)
add_test(NAME ClientTests COMMAND ClientTests)

target_link_libraries(ClientTests PRIVATE Qt::Test)

