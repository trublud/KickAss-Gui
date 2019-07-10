# Install script for directory: /home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/common/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/crypto/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/ringct/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/checkpoints/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/cryptonote_basic/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/cryptonote_core/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/lmdb/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/multisig/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/net/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/blockchain_db/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/mnemonics/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/rpc/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/serialization/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/wallet/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/p2p/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/cryptonote_protocol/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/simplewallet/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/gen_multisig/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/daemonizer/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/daemon/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/blockchain_utilities/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/blocks/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/device/cmake_install.cmake")
  include("/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/src/device_trezor/cmake_install.cmake")

endif()

