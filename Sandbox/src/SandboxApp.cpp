#include <Jackdaw.h>

class Sandbox : public Jackdaw::Application {

public:
	Sandbox() {


	}

	~Sandbox() {


	}


};

Jackdaw::Application* Jackdaw::CreateApplication() {
	return new Sandbox();
}