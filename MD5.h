//
// Created by Marco on 6/9/2021.
//

#ifndef TAREA_EXTRACLASE_4_MD5_H
#define TAREA_EXTRACLASE_4_MD5_H


#include <iostream>
#include "math.h"
#include <cstring>
#include <vector>

#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))
#define ROTATE_LEFT(x, n) (((x) << (n)) | ((x) >> (32-(n))))

using namespace std;

class MD5 {
public:
    MD5(string s);
    void Padding();
    void Hash_md5(int N);
    string GetHexStr(unsigned int num_str);
    void Output();
    ~MD5();
private:
    unsigned int X[16];
    unsigned int A, B, C, D;
    vector<unsigned char> input;
    long long len;
    unsigned char n[8];
};

#endif //TAREA_EXTRACLASE_4_MD5_H
