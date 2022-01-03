//
//  gfastats-global.h
//  
//
//  Created by Giulio Formenti on 12/30/21.
//

#ifndef gfastatsGlobal_h
#define gfastatsGlobal_h

//global
static auto start = std::chrono::high_resolution_clock::now();

static short int tabular_flag;

std::vector <std::string> headerList;
std::vector <std::string> headerExcludeList;

#endif /* gfastats-global_h */