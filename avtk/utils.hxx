
#ifndef OPENAV_AVTK_UTILS_HXX
#define OPENAV_AVTK_UTILS_HXX

/** Utils
 * Utils provides a variety of utility functions that are cross-platform.
 * They're based on small libraries like tinydir and zix, and aim to serve
 * creating fully features UI's in a lightweight and cross platform way.
**/

#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <libgen.h>
#include <sys/stat.h>

#include "tinydir.hxx"

namespace Avtk
{
  int loadSample( std::string path, std::vector< float >& sample, bool printErrors = true );
  int directoryContents( std::string d, std::vector< std::string >& files, bool printErrors = true );
};

#endif // OPENAV_AVTK_UTILS_HXX

