#pragma once

const std::vector<GLfloat> base_vertices = {
	-2.000000, -0.500000, 2.000000, -1.0000, 0.0000, 0.0000,  1, 0,//0
	-2.000000, -0.700000, -1.000000, -1.0000, 0.0000, 0.0000, 0, 1,//1 
	-2.000000, -0.700000, 2.000000, -1.0000, 0.0000, 0.0000,  0, 0,//2 
	-2.000000, -0.500000, -1.000000, 0.0000, 0.0000, -1.0000, 1, 0,//3 
	1.000000, -0.700000, -1.000000, 0.0000, 0.0000, -1.0000,  0, 1,//4 
	-2.000000, -0.700000, -1.000000, 0.0000, 0.0000, -1.0000, 0, 0,//5 
	1.000000, -0.500000, -1.000000, 1.0000, 0.0000, 0.0000,   1, 0,//6 
	1.000000, -0.700000, 2.000000, 1.0000, 0.0000, 0.0000,    0, 1,//7 
	1.000000, -0.700000, -1.000000, 1.0000, 0.0000, 0.0000,   0, 0,//8 
	1.000000, -0.500000, 2.000000, 0.0000, 0.0000, 1.0000,    1, 0,//9 
	-2.000000, -0.700000, 2.000000, 0.0000, 0.0000, 1.0000,   0, 1,//10 
	1.000000, -0.700000, 2.000000, 0.0000, 0.0000, 1.0000,    0, 0,//11 
	1.000000, -0.700000, -1.000000, 0.0000, -1.0000, 0.0000,  1, 0,//12 
	-2.000000, -0.700000, 2.000000, 0.0000, -1.0000, 0.0000,  0, 1,//13 
	-2.000000, -0.700000, -1.000000, 0.0000, -1.0000, 0.0000, 0, 0,//14 
	-2.000000, -0.500000, -1.000000, 0.0000, 1.0000, 0.0000,  1, 0,//15 
	1.000000, -0.500000, 2.000000, 0.0000, 1.0000, 0.0000,    0, 1,//16 
	1.000000, -0.500000, -1.000000, 0.0000, 1.0000, 0.0000,   0, 0,//17 
	-2.000000, -0.500000, -1.000000, -1.0000, 0.0000, 0.0000, 1, 1,//18 
	1.000000, -0.500000, -1.000000, 0.0000, 0.0000, -1.0000,  1, 1,//19 
	1.000000, -0.500000, 2.000000, 1.0000, 0.0000, 0.0000,    1, 1,//20 
	-2.000000, -0.500000, 2.000000, 0.0000, 0.0000, 1.0000,   1, 1,//21 
	1.000000, -0.700000, 2.000000, 0.0000, -1.0000, 0.0000,   1, 1,//22 
	-2.000000, -0.500000, 2.000000, 0.0000, 1.0000, 0.0000,   1, 1,//23 
};

const std::vector<GLuint> base_indices = {
	0, 1, 2, 
	3, 4, 5, 
	6, 7, 8, 
	9, 10, 11, 
	12, 13, 14, 
	15, 16, 17, 
	0, 18, 1, 
	3, 19, 4, 
	6, 20, 7, 
	9, 21, 10, 
	12, 22, 13, 
	15, 23, 16, 
};