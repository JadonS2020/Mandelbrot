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

    m_plane_center = {0,0};
    m_plane_size = {BASE_WIDTH, BASE_HEIGHT * m_aspectRatio};
    m_zo0mCount = 0;


    /*
    Initialize VertexArray
    We will use this to draw a color for each pixel
    Set its primitive type to Points
    Resize it to pixelWidth* pixelHeight
    */
}

void ComplexPlane::draw(RenderTarget& target, RenderStates states) const
{
    target.draw(m_vArray);
}

void complexPlane::updateRender()
{
    if (m_State = CALCULATING)
    {

    }
}

void ComplexPlane::zoomIn()
{
    double x, y;
    m_zoomCount++;
    x = BASE_WIDTH * (pow(BASE_ZOOM, m_zoomCount));
    y = BASE_HEIGHT * m_aspectRatio * (pow(BASE_ZOOM, m_zoomCount));
    m_plane_size = {x,y};
    m_State = CALCULATING;

}

void ComplexPlane::zoomOut()
{
    double x, y;
    m_zoomCount--;
    x = BASE_WIDTH * (pow(BASE_ZOOM, m_zoomCount));
    y = BASE_HEIGHT * m_aspectRatio * (pow(BASE_ZOOM, m_zoomCount));
    m_plane_size = {x,y};
    m_State = CALCULATING;
}

void ComplexPlane::setCenter(Vector2i mousePixel)
{

}

void ComplexPlane::setMouseLocation(Vector2i mousPixel)
{

}

void ComplexPlane::loadText(Text& text)
{

}

size_t ComplexPlane::countIterations(Vector2f coord)
{

}

void ComplexPlane::iterationsToRGB(size_t count, Uint8& r, Uint8& g, Uint8& b)
{

}

Vector2f ComplexPlane::mapPixelToCoords(Vector2i mousePixel)
{

}
