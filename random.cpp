//
//  random.cpp
//
//  Created by Bettysoft on 24.02.17.
//  Copyright © 2017 Bettysoft. All rights reserved.
//

#include "random.h"


std::default_random_engine generator;

std::string Bettysoft::Random::objectName(const std::string addString){
	const char chSign[][4] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	std::uniform_int_distribution<int> distribution(0, 35);
	std::string randomName;
	randomName.clear();

	for (int i = 0; i <= 6; i++) randomName += chSign[distribution(generator)];

	if (!addString.empty()){
		randomName += "_";
		randomName += addString;
	};
	return randomName;
};
