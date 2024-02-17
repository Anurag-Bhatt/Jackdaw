#pragma once

#include "Core.h"


namespace Jackdaw {

	class JACKDAW_API Application {

	public:

		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined by Client App
	Application* CreateApplication();

}
