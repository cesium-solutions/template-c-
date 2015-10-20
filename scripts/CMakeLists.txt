# Configure startup scripts for visual studio

if ( WIN32 )

  get_filename_component( CMAKE_MSVS_DIR ${CMAKE_MAKE_PROGRAM} PATH )
  set( CMAKE_MSVS_VCVARS ${CMAKE_MSVS_DIR}/../../VC/vcvarsall.bat CACHE PATH "Location of Visual Studio startup batch file" )

  configure_file( run-appname.bat
                  ${PROJECT_BINARY_DIR}/scripts/run-appname.bat
                  @ONLY_IMMEDIATE
  )

  configure_file( run-appnamed.bat
                  ${PROJECT_BINARY_DIR}/scripts/run-appnamed.bat
                  @ONLY_IMMEDIATE
  )

  configure_file( project-msvc.bat-in
                  ${PROJECT_BINARY_DIR}/scripts/${CMAKE_PROJECT_NAME}-msvc.bat
                  @ONLY_IMMEDIATE
  )

  configure_file( project-vars.bat-in
                  ${PROJECT_BINARY_DIR}/scripts/${CMAKE_PROJECT_NAME}-vars.bat
                  @ONLY_IMMEDIATE
  )

else() # Linux

  configure_file( .projectrc-in
                  ${PROJECT_BINARY_DIR}/scripts/.${CMAKE_PROJECT_NAME}rc
                  @ONLY_IMMEDIATE
  )

  if ( NOT CMAKE_BUILD_TYPE ) # Release

    configure_file( run-appname.sh
                    ${PROJECT_BINARY_DIR}/scripts/run-appname.sh
                    @ONLY_IMMEDIATE
    )

  elseif( ${CMAKE_BUILD_TYPE} STREQUAL Debug )

    configure_file( run-appnamed.sh
                    ${PROJECT_BINARY_DIR}/scripts/run-appnamed.sh
                    @ONLY_IMMEDIATE
    )

  else()

    message( Warning: Unknown Build Type: ${CMAKE_BUILD_TYPE} )

  endif()

endif()
