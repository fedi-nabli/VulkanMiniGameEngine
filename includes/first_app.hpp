#pragma once

#include "vmge_window.hpp"

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
  };
};
