
find_package(QT NAMES Qt6 COMPONENTS Core Quick REQUIRED)
find_package(Qt6 COMPONENTS Core Quick REQUIRED)

if(ANDROID)
    add_library(cm-ui SHARED
      src/main.cpp
      views.qrc
    )
else()
    add_executable(cm-ui
        src/main.cpp
        views.qrc
    )
endif()

target_compile_definitions(cm-ui
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(cm-ui
  PRIVATE Qt6::Core Qt6::Quick Qt6::Qml cm-lib)
