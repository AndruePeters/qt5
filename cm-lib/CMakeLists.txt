
add_library(cm-lib STATIC
    src/models/client.cpp
    src/controllers/main-controller.cpp
    src/controllers/main-controller.h
        )

target_include_directories(cm-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src )
target_link_libraries(cm-lib PRIVATE Qt6::Core)
target_compile_definitions(cm-lib PRIVATE CMLIB_LIBRARY)
