#pragma once

#include <string>
#include <vector>

namespace vmge
{
  class VmgePipeline
  {
    public:
      VmgePipeline(const std::string& vertFilePath, const std::string& fragFilaPath);

    private:
      static std::vector<char> readFile(const std::string& filepath);

      void createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
  };
};
