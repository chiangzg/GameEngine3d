#pragma once

#include "Interface.hpp"

namespace Engine {
	Interface IRuntimeModule {
		public:
			virtual ~IRuntimeModule() {};
			//初始化模块
			virtual int Initialize() = 0;
			//最终垃圾回收
			virtual void Finalize() = 0;
			//驱动执行，每执行一次处理一个单位
			virtual void Tick() = 0;
	};
}
