#include "ComplexPlane.h"

int main()
{
    int width = VideoMode::getDesktopMode().width;
    int height = VideoMode::getsDesktopMode().height;
    
    sf::Font font;
    if (!font.loadFromFile("fonts/KOMIKAP_.ttf"))
    {
	cout << "Failed" << endl;
    }

    VideoMode vm(width, height);

    RenderWindow window(vm, "Mandelbrot", Style::Default);

    sf::Text text;
    text.setFont(font);

    ComplexPlane plane;
    State state;

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
                    plane.setCenter(sf::Vector2i(event.MouseButtonPressed.x, event.MouseButtonPressed.y));
                    state = CALCULATING;

                }

                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    plane.zoomIn();
                    plane.setCenter(sf::Vector2i(event.MouseButtonPressed.x, event.MouseButtonPressed.y));
                    state = CALCULATING;
                }

            }

            if (event.type == sf::Event::MouseMoved)
            {
                plane.setMouseLocation(sf::Vector2i(event.MouseMoved.x, event.MouseMoved.y));
            }
        }
	    
	    //update plane segment
	    plane.updateRender();
            plane.loadText();

            //update scene segment
            window.clear();
            window.draw(plane, state);
            window.draw(text, state);
            window.display();
    }

    return 0;
}
