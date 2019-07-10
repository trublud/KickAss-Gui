file(REMOVE_RECURSE
  "libnet.pdb"
  "libnet.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/net.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
