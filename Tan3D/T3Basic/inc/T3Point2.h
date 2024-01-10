//
// Created by 29527 on 1/10/2024.
//
#ifndef TAN3D_T3POINT2_H
#define TAN3D_T3POINT2_H
#include "T3DCommon.h"
class T3D_DLL_EXPORT T3Point2{
private:
    double x;
    double y;
    double z;
    double w;
public:
    T3Point2():x(0),y(0),z(0),w(0){

    }
    ~T3Point2(){

    }
};
#endif //TAN3D_T3POINT2_H
