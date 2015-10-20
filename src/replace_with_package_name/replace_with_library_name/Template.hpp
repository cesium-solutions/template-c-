#ifndef replace_with_package_name_replace_with_library_name_Template_hpp
#define replace_with_package_name_replace_with_library_name_Template_hpp

#include <replace_with_package_name/replace_with_library_name/replace_with_library_nameAPI.h>

namespace replace_with_namespace {


/**
 * Brief description of the Template class goes here.
 * Detailed description of the Template class goes here.
 *
 * @code
 * Example of using the Template class in source code goes here.
 * @endcode
 */
class replace_with_library_name_API Template
{
public:

  /**
   * @name Structors
   * Methods for constructing and initialization.
   */
  /** @{ */

  /** Default constructor. */
  explicit Template();

  /** Copy constructor. */
  Template( Template const & orig );

  /** Destructor. */
  virtual ~Template();

  /** Assignment operator. */
  Template & operator=( Template const & rhs );

  /** @} */

  /**
   * @name Value
   * Manages the value.
   */
  /** @{ */

  /** Get the value. */
  int getValue() const { return m_Value; }
  /** Set the value. */
  void setValue( int value ) { m_Value = value; }

  /** @} */

private:


  int m_Value; /** The value. */

}; // class Template

} // namespace replace_with_namespace

#endif //replace_with_package_name_replace_with_library_name_Template_hpp
