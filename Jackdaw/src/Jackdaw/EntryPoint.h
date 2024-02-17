#pragma once

#ifdef JD_PLATFORM_WINDOWS

extern Jackdaw::Application* CreateApplication();

int main(int argc, char** argv) {

	printf("Free World!! \n");
	auto app = Jackdaw::CreateApplication();
	app->Run();
	delete app;

}


#endif // JD_PLATFORM_WINDOWS
