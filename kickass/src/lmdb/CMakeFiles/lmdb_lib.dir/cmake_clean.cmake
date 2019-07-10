file(REMOVE_RECURSE
  "liblmdb_lib.pdb"
  "liblmdb_lib.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/lmdb_lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
