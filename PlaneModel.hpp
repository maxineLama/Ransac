#pragma once

#include "GeometryModel.hpp"

class PlaneModel : public GeometryModel {
public:
    bool FitModel(const std::vector<Point3D>& data) override;
    double CalculateDistance(const Point3D& point) override;
    int NumParametersRequired() const override;
};