//
//  random.h
//
//  Created by Bettysoft on 24.02.17.
//  Copyright © 2017 Bettysoft. All rights reserved.
//

#ifndef H_RANDOM
#define H_RANDOM

#include <random>


namespace Bettysoft{

class Random{
public:
	static std::string objectName(const std::string addString = "");
};

}

#endif