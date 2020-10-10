# Andrue Peters
# 10/4/2020
add_executable(ClientTests src/client-tests.cpp.cpp)
add_test(NAME ClientTests COMMAND ClientTests)

target_link_libraries(ClientTests PRIVATE Qt::Test)

