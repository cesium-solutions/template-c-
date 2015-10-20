#ifndef replace_with_package_name_replace_with_library_name_replace_with_library_nameAPI_h_
#define replace_with_package_name_replace_with_library_name_replace_with_library_nameAPI_h_

#ifdef __cplusplus
extern "C" {
#endif

/** @file replace_with_library_nameAPI.h
 *  @brief Definitions for replace_with_library_name Library.
 *
 */

/* Definitions for exporting or importing the replace_with_library_name Library */
#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined replace_with_library_name_STATIC
#    define replace_with_library_name_API
#  elif defined replace_with_library_name_EXPORTS
#    define replace_with_library_name_API __declspec( dllexport )
#  else
#    define replace_with_library_name_API __declspec( dllimport )
#  endif
#else
#  define replace_with_library_name_API
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* replace_with_package_name_replace_with_library_name_replace_me_with_library_name_API_h_ */
