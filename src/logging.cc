#include "logging.h"

boost::logging::level lt = log_type_parse(std::string l)
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

}
