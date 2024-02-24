#pragma once

#ifdef JD_PLATFORM_WINDOWS

extern Jackdaw::Application* CreateApplication();

int main(int argc, char** argv) {

	Jackdaw::Log::Init();
	
	JD_Core_WARN("Initialized Logger");
	JD_Core_INFO("Jackdaw now supports build files! Aye");
	JD_Core_INFO("Jackdaw says Hi Ghosh!!");
	JD_INFO("Logging begins!");

	//printf("The dawn of the new Age.\nAn age of the Pirates.\nWelcome to the FREE World!!\n");
	auto app = Jackdaw::CreateApplication();
	app->Run();
	delete app;

}

#endif // JD_PLATFORM_WINDOWS
