#pragma once

#include <string>
#include "environment.h"

namespace torch {
namespace deploy {

class PathEnvironment : public Environment {
 public:
  explicit PathEnvironment(std::string path) : path_(std::move(path)) {}
  void configureInterpreter(Interpreter* interp) override;

 private:
  std::string path_;
};

} // namespace deploy
} // namespace torch