# CMake generated Testfile for 
# Source directory: /home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty
# Build directory: /home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(difficulty "/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty/difficulty-tests" "/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty/data.txt")
add_test(wide_difficulty "/usr/bin/python" "/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty/wide_difficulty.py" "/usr/bin/python" "/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty/gen_wide_data.py" "/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty/difficulty-tests" "/home/dad/coins/build/GenerateKickAssCoin/kickasscoin/tests/difficulty/wide_data.txt")
