#include <replace_with_package_name/replace_with_library_name/Template.hpp>

#include <iostream>

int main( int argc, char ** argv )
{
  std::cout<<"Running: "<<argv[0]<<std::endl;
  replace_with_namespace::Template t;
  return 0;
}
