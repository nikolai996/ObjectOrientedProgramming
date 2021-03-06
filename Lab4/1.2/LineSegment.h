#pragma once

#include "Shape.h"

class CLineSegment : public IShape
{
public:
    CLineSegment(const std::pair<int, int> & firstPoint, const std::pair<int, int> & secondPoint, const Color & lineColor);

    double GetPerimeter() const override;

    double GetArea() const override;

    std::string ToString() const override;

    Color GetLineColor() const override;

private:
    double GetLengthOfLine();
    std::pair<int, int> m_firstPoint;
    std::pair<int, int> m_secondPoint;
    double m_length;
    Color m_lineColor;
};

