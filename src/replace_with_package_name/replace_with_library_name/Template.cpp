#include "Template.hpp"

#include <iostream>

namespace replace_with_namespace {

Template::Template()
: m_Value(0)
{
  std::cout<<__FUNCTION__<<std::endl;
}

Template::Template( Template const & orig )
: m_Value(orig.m_Value)
{
  std::cout<<__FUNCTION__<<std::endl;
}

Template::~Template()
{
  std::cout<<__FUNCTION__<<std::endl;
}

Template & Template::operator=( Template const & rhs )
{
  std::cout<<__FUNCTION__<<std::endl;
  if ( (void *)&rhs == this ) {
    return *this;
  }
  m_Value = rhs.m_Value;

  return *this;
}

} // namespace replace_with_namespace
