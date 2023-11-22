#include "ComplexPlane.h"

ComplexPlane::ComplexPlane(int pixelWidth, int pixelHeight)
{
    /*
    Assign m_pixelWidth with the parameter values
    Calculate and assign the aspect ratio of the monitor, m_aspectRatio
    height / width
    Be careful of integer divide
    Our object needs to know this so the plane is not distorted
    */

    m_plane_center = { 0,0 };
    m_plane_size = { BASE_WIDTH, BASE_HEIGHT * m_aspectRatio };
    m_zoomCount = 0;


    /*
    Initialize VertexArray
    We will use this to draw a color for each pixel
    Set its primitive type to Points
    Resize it to pixelWidth* pixelHeight
    */
}

void ComplexPlane::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_vArray);
}

void ComplexPlane::updateRender()
{
}

void ComplexPlane::updateRender()
{
    if (m_State = State::CALCULATING)
    {

    }
}

void ComplexPlane::zoomIn()
{
    double x, y;
    m_zoomCount++;
    x = BASE_WIDTH * (pow(BASE_ZOOM, m_zoomCount));
    y = BASE_HEIGHT * m_aspectRatio * (pow(BASE_ZOOM, m_zoomCount));
    m_plane_size = { x,y };
    m_State = State::CALCULATING;

}
void ComplexPlane::zoomOut()
{
    double x, y;
    m_zoomCount--;
    x = BASE_WIDTH * (pow(BASE_ZOOM, m_zoomCount));
    y = BASE_HEIGHT * m_aspectRatio * (pow(BASE_ZOOM, m_zoomCount));
    m_plane_size = { x,y };
    m_State = State::CALCULATING;
}

void ComplexPlane::setCenter(sf::Vector2i mousePixel)
{


}

void ComplexPlane::setMouseLocation(sf::Vector2i mousePixel)
{

}

void ComplexPlane::loadText(sf::Text& text)
{

}

int ComplexPlane::countIterations(sf::Vector2f coord)
{

}

void ComplexPlane::iterationsToRGB(size_t count, sf::Uint8& r, sf::Uint8& g, sf::Uint8& b)
{

}

sf::Vector2f ComplexPlane::mapPixelToCoords(sf::Vector2i mousePixel)
{

}
