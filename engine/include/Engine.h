//
// Created by Jie on 2018/7/23.
//

#ifndef PROJECT_DLL_H
#define PROJECT_DLL_H

#ifdef EngineAPI
#define EngineAPI __declspec(dllexport)
#else
#define EngineAPI __declspec(dllimport)
#endif

void EngineAPI Hello();

#endif //PROJECT_DLL_H
