#pragma once

#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace Engine {
    Interface IApplication : implements IRuntimeModule {
    public:
        virtual int Initialize() = 0;

        virtual void Finalize() = 0;

        virtual void Tick() = 0;

        //处理退出信号
        virtual bool IsQuit() = 0;
    }
}
