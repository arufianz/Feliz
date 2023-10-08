#include <Feliz.h>

class Sandbox : public Feliz::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Feliz::Application* Feliz::CreateApplication()
{
	return new Sandbox();
}