#include "logging.h"

boost::logging::level::type log_level_parse(std::string l)
{
  if (l == "debug") {
    return boost::logging::level::debug;
  }

  if (l == "info") {
    return boost::logging::level::info;
  }

  if (l == "warning") {
    return boost::logging::level::warning;
  }

  if (l == "error") {
    return boost::logging::level::error;
  }

  if (l == "fatal") {
    return boost::logging::level::fatal;
  }
  
  throw std::runtime_error("unparseable logging level"); 

}
