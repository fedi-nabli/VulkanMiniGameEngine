#include "vmge_pipeline.hpp"

#include <fstream>
#include <iostream>
#include <stdexcept>

namespace vmge
{
  VmgePipeline::VmgePipeline(const std::string& vertFilePath, const std::string& fragFilaPath)
  {
    createGraphicsPipeline(vertFilePath, fragFilaPath);
  }

  std::vector<char> VmgePipeline::readFile(const std::string& filepath)
  {
    std::ifstream file(filepath, std::ios::ate | std::ios::binary);

    if (!file.is_open())
    {
      throw std::runtime_error("Failed to open file: " + filepath);
    }

    size_t fileSize = static_cast<size_t>(file.tellg());
    std::vector<char> buffer(fileSize);

    file.seekg(0);
    file.read(buffer.data(), fileSize);

    file.close();
    return buffer;
  }

  void VmgePipeline::createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilaPath)
  {
    auto vertCode = readFile(vertFilePath); 
    auto fragCode = readFile(fragFilaPath);

    std::cout << "Vertex Shader Code Size: " << vertCode.size() << std::endl;
    std::cout << "Fragment Shader Code Size: " << fragCode.size() << std::endl;
  }
};
