#pragma once

#include "vmge_window.hpp"
#include "vmge_pipeline.hpp"

namespace vmge
{
  class FirstApp
  {
    public:
      static constexpr int WIDTH = 800;
      static constexpr int HEIGHT = 600;

      void run();

    private:
      VmgeWindow vmgeWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
      VmgePipeline vmgePipeline{"./shaders/simple_shader.vert.spv", "./shaders/simple_shader.frag.spv"};
  };
};
