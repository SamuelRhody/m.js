#
#  Stand alone programs that use the C bindings to GT.M
#

include_directories(${GTM_DIST})
link_directories(${GTM_DIST})

add_executable(hello helloworld.c)
target_link_libraries(hello gtmshr)

configure_file(
  ${PROJECT_SOURCE_DIR}/Source/gtm_access.ci
  ${LIBRARY_OUTPUT_PATH}/gtm_access.ci
  )

configure_file(
  ${PROJECT_SOURCE_DIR}/Source/_gtmaccess.m
  ${LIBRARY_OUTPUT_PATH}/_gtmaccess.m
  )

configure_file(
  ${PROJECT_SOURCE_DIR}/Source/setupEnvironment.sh.in
  ${EXECUTABLE_OUTPUT_PATH}/setupEnvironment.sh
  )

add_executable(gtm_access gtm_access.c)
target_link_libraries(gtm_access gtmshr)
