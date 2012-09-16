#
#  Stand alone programs that use the C bindings to GT.M
#

include_directories(${GTM_DIST})
link_directories(${GTM_DIST})

add_executable(hello helloworld.c)
target_link_libraries(hello gtmshr)

add_executable(gtm_access gtm_access.c)
target_link_libraries(gtm_access gtmshr)
