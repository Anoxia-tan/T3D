#ifndef T3DCOMMON_H
#define T3DCOMMON_H
#ifdef WIN32
    #define T3D_DLL_EXPORT __declspec(dllexport)
    #define T3D_DLL_IMPORT __declspec(dllimport)
#elifdef __linux__

#endif
#endif