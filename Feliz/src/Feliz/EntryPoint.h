#pragma once

#ifdef FZ_PLATFORM_WINDOWS

extern Feliz::Application* Feliz::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Feliz::CreateApplication();
	app->Run();
	delete app;
}

#endif
