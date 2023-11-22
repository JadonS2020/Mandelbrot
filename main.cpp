#include "ComplexPlane.h"

int main()
{
    VideoMode::getDesktopMode().width;
    VideoMode::getsDesktopMode().height;
    
    sf::Font font;
	if (!font.loadFromFile("fonts/KOMIKAP_.ttf"))
	{
		cout << "Failed" << endl;
    }

    VideoMode vm(1920, 1080);

    RenderWindow window(vm, "Mandelbrot", Style::Default);

    sf::Text text;
	text.setFont(font);

    ComplexPlane plane;

    while (window.isOpen())
	{
        if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
            window.close();
        }

        while (window.pollEvent(event))
		{
            if (event.type == sf::Event::MouseButtonPressed)
            {
                    if (event.mouseButton.button == sf::Mouse::Right)
                    {
                        plane.zoomOut();
                        plane.setCenter()
                    }

                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        plane.zoomIn
                        plane.setCenter();
                    }
            }

            if (event.type == sf::Event::MouseMoved)
            {
                
            }
        }
    }

    return 0;
}
