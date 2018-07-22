//
// Created by Jie on 2018/7/23.
//

#ifndef ENGINE_H
#define ENGINE_H

#ifdef EngineAPI
    #define EngineAPI __declspec(dllexport)
#else
    #define EngineAPI __declspec(dllimport)
#endif;

#endif //ENGINE_H
